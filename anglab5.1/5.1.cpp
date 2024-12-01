#include <iostream>
#include <cmath>
using namespace std;

double k(double x, double y);

int main()
{
    double p, q;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double result = (k(1 + p * q * q, p * p) + k(p * q + q * q, p)) / (1 + k(p * q + q * q, p));

    cout << "Result = " << result << endl;

    return 0;
}

double k(double x, double y)
{
    return (x / (1 + sin(y))) + (y / (1 + x * x));
}
