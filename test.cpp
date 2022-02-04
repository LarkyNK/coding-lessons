#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname;
    string lastname;
    string age;
    string a= ",your boomer";
    cout << "Enter your first name: \n";
    cin >> firstname;
    cout << "Enter your last name: \n";
    cin >> lastname;
    cout << "Enter your age: \n";
    cin >> age;
    cout << "Your name is " << firstname.append(" ").append(lastname).append(" ") << "and your age is " << age.append(a);
    return 0;
} 