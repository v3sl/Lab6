#ifndef INC_21_10_2021_FUNCTIONS_H
#define INC_21_10_2021_FUNCTIONS_H

#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

class fraction {
private:
    int numerator;
    int denominator;
    void CheckDenominator(fraction a);
    void CheckFraction(fraction a);
    int inputNominator();
    int inputDenominator();
    fraction(){
         numerator = 0;
         denominator = 1;
    }
public:
    fraction(int numerator, int denominator){
         this->numerator = numerator;
         this->denominator = denominator;
    }
     fraction(const fraction &frac){
        numerator = frac.numerator;
        denominator = frac.denominator;
    }
    int GetNumerator();
    int GetDenominator();
    void printFraction();
    static fraction GetFraction(fraction a);
    static fraction CorrectFraction(fraction a);
    static fraction Sum(fraction a, fraction b);
    static fraction Multiply(fraction a, fraction b); 
    static fraction Division(fraction a, fraction b);
};

void solve();
int gcd (int a, int b);
#endif


