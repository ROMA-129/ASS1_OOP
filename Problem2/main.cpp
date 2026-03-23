#include "Fraction.cpp"
#include <iostream>
using namespace std;

int main() {
    cout << "========== Fraction Class Test ==========\n\n";
    
    // Test 1: Default Constructor
    cout << "1. Default Constructor:" << endl;
    Fraction f1;
    cout << "f1 = " << f1 << endl << endl;
    
    // Test 2: Parameterized Constructor
    cout << "2. Parameterized Constructor:" << endl;
    Fraction f2(3, 4);
    Fraction f3(5, 2);
    cout << "f2 = " << f2 << endl;
    cout << "f3 = " << f3 << endl << endl;
    
    // Test 3: Arithmetic Operations
    cout << "3. Arithmetic Operations:" << endl;
    cout << "f2 + f3 = " << (f2 + f3) << endl;
    cout << "f2 - f3 = " << (f2 - f3) << endl;
    cout << "f2 * f3 = " << (f2 * f3) << endl;
    cout << "f2 / f3 = " << (f2 / f3) << endl << endl;
    
    // Test 4: Comparison Operators
    cout << "4. Comparison Operators:" << endl;
    Fraction f4(6, 8);  // simplified to 3/4
    cout << "f2 = " << f2 << ", f4 = " << f4 << endl;
    cout << "f2 == f4: " << (f2 == f4 ? "true" : "false") << endl;
    cout << "f2 != f4: " << (f2 != f4 ? "true" : "false") << endl;
    cout << "f2 < f3: " << (f2 < f3 ? "true" : "false") << endl;
    cout << "f2 > f3: " << (f2 > f3 ? "true" : "false") << endl << endl;
    
    // Test 5: Input Operator
    cout << "5. Input Operator (Enter a fraction like 3/4 or just 5):" << endl;
    Fraction f5;
    cout << "Enter fraction: ";
    cin >> f5;
    cout << "You entered: " << f5 << endl << endl;
    
    // Test 6: Fraction with denominator = 1
    cout << "6. Fraction with denominator = 1:" << endl;
    Fraction f6(7, 1);
    cout << "f6 = " << f6 << " (displays as integer)" << endl << endl;
    
    // Test 7: Automatic simplification
    cout << "7. Automatic Simplification:" << endl;
    Fraction f7(10, 25);
    cout << "10/25 simplified = " << f7 << endl;
    Fraction f8(8, -12);
    cout << "8/-12 simplified = " << f8 << endl << endl;
    
    // Test 8: Multiple operations in one line
    cout << "8. Multiple Operations:" << endl;
    cout << "(3/4 + 1/2) * 2/3 = " << ((f2 + Fraction(1, 2)) * Fraction(2, 3)) << endl;
    
    return 0;
}