#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a;
    double b;
    char c;
    cout << "Enter a :\n";
    cin >> a;
    cout << "Enter b :\n";
    cin >> b;
    cout << "Enter character (c):\n";
    cin >> c;
    if (c == '+')
    {
        cout << "Addition of both the nos. = " << a + b << endl;
    }
    else if (c == '-')
    {
        cout << "Subtraction of both the nos. = " << a - b << endl;
    }
    else if (c == '*')
    {
        cout << "Multiplication of both the nos. = " << a * b << endl;
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            cout << "since b is 0, it is an error\n";
        }
        else
        {
            cout << "Division of a by b = " << a / b << endl;
        }
    }

    return 0;
}
