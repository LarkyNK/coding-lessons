#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    cout << "Enter first string: \n";
    getline(cin, a);
    cout << "Enter second string: \n";
    getline(cin, b);
    bool shut = a.length() == b.length();
    cout << "Lenth of both strings are equal \n" << shut << endl;
    return 0;
}