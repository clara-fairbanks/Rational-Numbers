/* implementation file
 * Program name: Rational
 * Created by Clara Fairbanks on 2/22/17
 * Purpose - demonstrate operator overloading using fractions
 */
#include <cstdio>
#include <iostream>
#include "Rational.hpp"
using namespace std;

Rational & Rational::operator = ( const Rational & rhs ) {
    if( this != &rhs ) {
        nume = rhs.numerator();
        denom = rhs.denominator();
    }
    return *this;
}
//overloads ostream
ostream &operator << ( ostream &out, const Rational &r ) {
    out << r.numerator() << " / " << r.denominator();
    return out;
}
//overloads istream
istream &operator >> ( istream &in, Rational &c ) {
    char symbol;
    return  in >>c.nume >>symbol>>c.denom ;
}

//  a = nume, b = denom, c = rhs.nume d = rhs.denom
// a / b + c / d = (ad + bc) / bd
Rational Rational::operator + ( const Rational & rhs ) const {
    return Rational((nume * rhs.denom) + (denom * rhs.nume), denom * rhs.denom);
}
// a / b - c / d = (ad - bc) / bd
Rational Rational::operator - ( const Rational & rhs ) const {
    return Rational((nume * rhs.denom) - (denom * rhs.nume), denom * rhs.denom);
}
// a / b * c / d =  ac / bd
Rational Rational::operator * ( const Rational & rhs ) const {
    return Rational(nume * rhs.nume, denom * rhs.denom);
}
// (a / b)  /  (c / d) = ad / bc, where c/d ≠ 0.
Rational Rational::operator / ( const Rational & rhs ) const {
    return Rational(nume * rhs.denom, denom * rhs.nume);
}

// a / b   op   c/d   if   ad   op  bc, where op is any relational operator.
// For example,  a/b  <  c/d  if  ad < bc.
bool Rational :: operator < ( const Rational & rhs ) const{
    return ((nume * rhs.denom) < (denom * rhs.nume));
}

bool Rational :: operator <= ( const Rational & rhs) const{
    return ((nume * rhs.denom) <= (denom * rhs.nume));;
}

bool Rational :: operator > ( const Rational & rhs) const{
    return ((nume * rhs.denom) > (denom * rhs.nume));;
}

bool Rational :: operator >= ( const Rational & rhs) const{
    return ((nume * rhs.denom) >= (denom * rhs.nume));;
}

bool Rational :: operator == ( const Rational & rhs) const{
    return ((nume * rhs.denom) == (denom * rhs.nume));;
}

bool Rational :: operator != (const Rational & rhs) const{
    return ((nume * rhs.denom) != (denom * rhs.nume));;
}
