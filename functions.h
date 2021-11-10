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
    fraction(){
        numerator = 0;
        denominator = 1;
    }
public:
    fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
        assert(denominator != 0);
    }
    fraction(const fraction &frac){
        numerator = frac.numerator;
        denominator = frac.denominator;
    }
    int GetNumerator() const;
    int GetDenominator() const;
    void printFraction();
    fraction CorrectFraction();
    static fraction Sum(fraction a, fraction b);
    static fraction Multiply(fraction a, fraction b);
    static fraction Division(fraction a, fraction b);
};

bool operator==(const fraction& a,const fraction& b);

void solve();
#endif

