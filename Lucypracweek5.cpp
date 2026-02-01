#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

Fraction& largestFraction(Fraction &f1, Fraction &f2, Fraction &f3) {
    double v1 = (double)f1.numerator / f1.denominator;
    double v2 = (double)f2.numerator / f2.denominator;
    double v3 = (double)f3.numerator / f3.denominator;
    
    if (v1 >= v2 && v1 >= v3) return f1;
    if (v2 >= v1 && v2 >= v3) return f2;
    return f3;
}

int main() {
    Fraction a{1, 2}, b{3, 4}, c{2, 3};
    Fraction &largest = largestFraction(a, b, c);
    
    cout << "Largest fraction is: "
         << largest.numerator << "/" << largest.denominator << endl;
    
    return 0;
}
