#include "functions.h"

fraction fraction::CorrectFraction(){
    fraction c(numerator, denominator);
    if(denominator < 0 && numerator < 0 ){
        fraction c1(-numerator, -denominator);
        c = c1;
    }
    if(denominator < 0 && numerator > 0 ) {
        fraction c2(-numerator, -denominator);
        c = c2;
    }
    int p = gcd(numerator, denominator);
    fraction c4(c.GetNumerator()/p, c.GetDenominator()/p);
    c = c4;
    return c;
}

void fraction::printFraction(){
    fraction c = CorrectFraction();
    cout << c.GetNumerator() << '/' << c.GetDenominator() <<endl;
}

int fraction::GetNumerator(){
    return numerator;
}

int fraction::GetDenominator(){
    return denominator;
}

fraction fraction::GetFraction() {
    fraction c(numerator, denominator);
    return c;
}

fraction fraction::Sum(fraction a, fraction b) {
    int x = a.GetDenominator()*b.GetNumerator() + b.GetDenominator()*a.GetNumerator();
    int y = a.GetDenominator()*b.GetDenominator();
    fraction c(x, y);
    return c;
}

fraction fraction::Multiply(fraction a, fraction b ){
    int x = a.GetNumerator()*b.GetNumerator();
    int y = a.GetDenominator()*b.GetDenominator();
    fraction c(x,y);
    return c;
}

fraction fraction::Division(fraction a, fraction b){
    int x = a.GetNumerator()*b.GetDenominator();
    int y = a.GetDenominator()*b.GetNumerator();
    fraction c(x,y);
    return c;
}

int fraction::gcd (int a, int b) {
	while (b) {
		a %= b;
		swap (a, b);
	}
	return a;
}

void solve() {
    fraction MyFraction1(3, 5);
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