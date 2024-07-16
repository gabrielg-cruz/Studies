/*
    Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
*/

#include <limits.h>

double myPow(double x, int n) {
    if(n == 0) return 1;
    if(n < 0) {
        if (n == INT_MIN) 
            return 1 / (myPow(x, INT_MAX) * x);
        return 1 / myPow(x, -n);
    }
    double half = myPow(x, n / 2);
    if(n % 2 == 0) return half * half;
    else return x * half * half;
}