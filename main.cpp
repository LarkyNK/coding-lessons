#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout << "Enter a:\n";
    cin >> a;
    cout << "Enter b:\n";
    cin >> b;
    cout << "Enter Operator:1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n";
    cin >> c;

    if (c == 1)
    {
        cout << "A+B=" << a + b << "\n";
    }
    if (c == 2)
    {
        cout << "A-B=" << a - b << "\n";
    }
    if (c == 3)
    {
        cout << "A*B=" << a * b << endl;
    }
    if (c == 4)
    {
        if (b != 0)
        {
            cout << "A/B=" << a / b << endl;
        }
        else
        {
            cout << "Error due to division by 0\n";
        }
    }
    return 0;
}
