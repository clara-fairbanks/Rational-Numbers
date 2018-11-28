/* main
 * Program name: Rational Numbers
 * Created by Clara Fairbanks on 2/22/17
 * Purpose - demonstrate operator overloading using fractions
 */
#include <cstdio>
#include <iostream>
#include "Rational.hpp"
using namespace std;

int main( int argc, char ** argv ) {
    Rational d, e;
    cout << "Enter two distinct fractions in the form of a / b " << endl;
    cin >> d >> e;
    Rational a = 7;        //demonstrates default constructor if only one value us passed
    cout << "a is: " << a << endl;
    Rational b(15, 9);    // 5/3
    cout << "b is: " << b << endl;
    cout << "d is: " << d << endl;
    cout << "e is: " << e << endl;
    
    cout << a << " + " << b << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    if (e > d)
        cout << d <<" is less than " << e <<endl;
    else
        cout << d << " is greater than " << e <<endl;
    if (a < e)
        cout << a <<" is less than " << e <<endl;
    else
        cout << e << " is greater than " << a <<endl;
    if (d == e)
        cout << d <<" is equal to " << e <<endl;
    else
        cout << d << " is not equal to " << e <<endl;
    
    return 0;
}
