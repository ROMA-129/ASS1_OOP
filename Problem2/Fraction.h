#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;      // البسط
    int denominator;    // المقام (لا يساوي صفر)

    // دالة مساعدة للتبسيط (خاصة)
    void simplify();

    // دالة لحساب GCD (القاسم المشترك الأكبر)
    int gcd(int a, int b) const;

public:
    // Constructors
    Fraction();                              // Default: 0/1
    Fraction(int n, int d = 1);              // Parameterized

    // Getters (اختياري)
    int getNumerator() const;
    int getDenominator() const;

    // Setters (اختياري)
    void setNumerator(int n);
    void setDenominator(int d);

    // Arithmetic Operators
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Comparison Operators
    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;

    // Stream Operators (Friends)
    friend ostream& operator<<(ostream& os, const Fraction& f);
    friend istream& operator>>(istream& is, Fraction& f);
};

#endif