#include "functions.h"

void fraction::CheckDenominator(fraction a) {
    a = CorrectFraction(a);
    assert(a.GetDenominator() != 0);
}
void fraction::CheckFraction(fraction a) {
    CheckDenominator(a);
    a = CorrectFraction(a);
    assert(a.GetNumerator() > a.GetDenominator());
}

fraction fraction::CorrectFraction(fraction a){
    fraction c(a.GetNumerator(), a.GetDenominator());
    if(a.GetDenominator() < 0 && a.GetNumerator() < 0 ){
        fraction c1(-a.GetNumerator(), -a.GetDenominator());
        c = c1;
    }
    if(a.GetDenominator() < 0 && a.GetNumerator() > 0 ) {
        fraction c2(-a.GetNumerator(), -a.GetDenominator());
        c = c2;
    }
    int p = gcd(a.GetNumerator(), a.GetDenominator());
    fraction c4(c.GetNumerator()/p, c.GetDenominator()/p);
    c = c4;
    return c;
}

void fraction::printFraction(){
    fraction c (numerator, denominator);
    c = c.CorrectFraction(c);
    cout << c.GetNumerator() << '/' << c.GetDenominator() <<endl;
}

int fraction::GetNumerator(){
    return numerator;
}

int fraction::GetDenominator(){
    return denominator;
}

fraction fraction::GetFraction(fraction a) {
    fraction c(a.GetNumerator(), a.GetDenominator());
    return c;
}

fraction fraction::Sum(fraction a, fraction b) {
    //a = a.CorrectFraction(a);
    //b = b.CorrectFraction(b);
    int x = a.GetDenominator()*b.GetNumerator() + b.GetDenominator()*a.GetNumerator();
    int y = a.GetDenominator()*b.GetDenominator();
    fraction c(x, y);
    //c = c.CorrectFraction(c);
    return c;
}

fraction fraction::Multiply(fraction a, fraction b ){
    //a = a.CorrectFraction(a);
    //b = b.CorrectFraction(b);
    int x = a.GetNumerator()*b.GetNumerator();
    int y = a.GetDenominator()*b.GetDenominator();
    fraction c(x,y);
    //c = c.CorrectFraction(c);
    return c;
}

fraction fraction::Division(fraction a, fraction b){
    //a = a.CorrectFraction(a);
    //b = b.CorrectFraction(b);
    int x = a.GetNumerator()*b.GetDenominator();
    int y = a.GetDenominator()*b.GetNumerator();
    fraction c(x,y);
    //c = c.CorrectFraction(c);
    return c;
}

void solve() {
    fraction MyFraction1(3, 12);
    fraction MyFraction2(2, 4);
    fraction a2(MyFraction1);       
    MyFraction1.printFraction();
    MyFraction2.printFraction();
    fraction c = fraction::Sum(MyFraction1, MyFraction2);
    c.printFraction();
    fraction c1 = fraction::Multiply(MyFraction1, MyFraction2);
    c1.printFraction();
    fraction c2 = fraction::Division(MyFraction1, MyFraction2);
    c2.printFraction();    
}

int gcd (int a, int b) {
	while (b) {
		a %= b;
		swap (a, b);
	}
	return a;
}