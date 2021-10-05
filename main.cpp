#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    cout << "Enter first line" << endl;
    getline(cin, a);
    cout << "Enter second line\n";
    getline(cin, b);
    cout << "Enter third line\n";
    getline(cin, c);
    double len = (a.length() + b.length() + c.length()) / 3.0;
    cout << "Average length = " << len;
    return 0;
}
