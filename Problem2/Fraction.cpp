#include "Fraction.h"
#include <cmath>

// دالة حساب GCD (القاسم المشترك الأكبر)
int Fraction::gcd(int a, int b) const {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// دالة التبسيط
void Fraction::simplify() {
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    
    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
}

// Default Constructor
Fraction::Fraction() : numerator(0), denominator(1) {}

// Parameterized Constructor
Fraction::Fraction(int n, int d) {
    if (d == 0) {
        cout << "Error: Denominator cannot be zero. Setting to 1." << endl;
        denominator = 1;
    } else {
        denominator = d;
    }
    numerator = n;
    simplify();
}

// Getters
int Fraction::getNumerator() const { return numerator; }
int Fraction::getDenominator() const { return denominator; }

// Setters
void Fraction::setNumerator(int n) {
    numerator = n;
    simplify();
}

void Fraction::setDenominator(int d) {
    if (d != 0) {
        denominator = d;
        simplify();
    } else {
        cout << "Error: Denominator cannot be zero!" << endl;
    }
}

// Arithmetic Operators
Fraction Fraction::operator+(const Fraction& other) const {
    int newNum = numerator * other.denominator + other.numerator * denominator;
    int newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
}

Fraction Fraction::operator-(const Fraction& other) const {
    int newNum = numerator * other.denominator - other.numerator * denominator;
    int newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        cout << "Error: Division by zero!" << endl;
        return Fraction(0, 1);
    }
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

// Comparison Operators
bool Fraction::operator==(const Fraction& other) const {
    return (numerator == other.numerator && denominator == other.denominator);
}

bool Fraction::operator!=(const Fraction& other) const {
    return !(*this == other);
}

bool Fraction::operator<(const Fraction& other) const {
    return (numerator * other.denominator < other.numerator * denominator);
}

bool Fraction::operator>(const Fraction& other) const {
    return (numerator * other.denominator > other.numerator * denominator);
}

bool Fraction::operator<=(const Fraction& other) const {
    return !(*this > other);
}

bool Fraction::operator>=(const Fraction& other) const {
    return !(*this < other);
}

// Stream Operators
ostream& operator<<(ostream& os, const Fraction& f) {
    if (f.denominator == 1) {
        os << f.numerator;
    } else if (f.numerator == 0) {
        os << 0;
    } else {
        os << f.numerator << "/" << f.denominator;
    }
    return os;
}

istream& operator>>(istream& is, Fraction& f) {
    char slash;
    is >> f.numerator;
    
    // Check if there's a slash
    if (is.peek() == '/') {
        is >> slash >> f.denominator;
        if (f.denominator == 0) {
            cout << "Error: Denominator cannot be zero!" << endl;
            f.denominator = 1;
        }
    } else {
        f.denominator = 1;
    }
    
    f.simplify();
    return is;
}