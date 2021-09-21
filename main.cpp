#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    cout << "Enter c\n";
    cin >> c;
    double d = (b * b) - 4 * a * c;
    cout << "Discriminant: " << d << "\n";
    if (d > 0)
    {
        cout << "Discriminant is positive, hence equation has 2 real and different roots\n";
    }
    else if (d == 0)
    {
        cout << "Discriminant is equal to zero, hence equation has 2 real but equal roots\n";
    }
    else if (d < 0)
    {
        cout << "Discriminant is less than zero, hence equation has imaginary roots\n";
    }
    return 0;
}
