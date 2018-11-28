/* header file
 * Program name: Rational
 * Created by Clara Fairbanks on 2/22/17
 * Purpose - demonstrate operator overloading using fractions
 */
#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H
#include <iostream>
using namespace std;

class Rational {
    //overloads cin and cout
    friend ostream& operator << (ostream & o, const Rational & r);
    friend istream& operator >> (istream & in, Rational & c);
private:
    int nume;
    int denom;
public:
    //default values for num and denom if unspecified
    Rational ( int numerator = 1, int denominator = 1 ) : nume(numerator), denom(denominator) {};
    //get numerator and denominator
    int numerator() const { return nume; };
    int denominator() const { return denom; };
    
    Rational & operator = ( const Rational & );
    
    // overloads arithmetic opperators
    Rational operator + ( const Rational & ) const;
    Rational operator - ( const Rational & ) const;
    Rational operator * ( const Rational & ) const;
    Rational operator / ( const Rational & ) const;
    // overloads relational opperators
    bool operator < ( const Rational & ) const;
    bool operator <= ( const Rational & ) const;
    bool operator >  ( const Rational & ) const;
    bool operator >= ( const Rational & ) const;
    bool operator == ( const Rational & ) const;
    bool operator != (const Rational &) const;
};


#endif //RATIONAL_RATIONAL_H
