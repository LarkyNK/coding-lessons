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
    if (a <= 0)
    {
        cout << "Input is invalid as a is not positive\n";
    }
    else if (b <= 0)
    {
        cout << "Input is invalid as b is not positive\n";
    }
    else if (c <= 0)
    {
        cout << "Input is invalid as c is not positive\n";
    }
    double d = (a * a) + (b * b);
    cout << "Pythagorean triplet status:" << d << "\n";
    if (d == c * c)
    {
        cout << "The following set of numbers form a pythagorean triplet\n";
    }
    else
    {
        cout << "The following set of numbers DO NOT form a pythagorean triplet\n";
    }
    return 0;
}
