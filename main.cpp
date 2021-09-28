#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter your fullname\n";
    getline(cin, name);
    cout << "Enter your age\n";
    cin >> age;
    cout << "Your name is: " << name << "\n";
    cout << "Your age is: " << age << endl;
    if(age >= 60)
    {
        cout << "You are a senior citizen\n";
    }
    else
    {
        cout << "You got a long life ahead\n";
    }
    return 0;
}
