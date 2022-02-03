#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cout << "Enter x: \n";
    cin >> x;
    cout << "Cosh of x= " << cosh(x) << endl;
    cout << "Another result of x: " << 1.0 / 2.0 * (exp(x) + exp(-x)) << "\n";
    return 0;
}