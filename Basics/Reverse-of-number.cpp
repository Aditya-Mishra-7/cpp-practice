#include <iostream>
using namespace std;
int main()
{
    int a, digit, New = 0;
    cout << "Enter any number : ";
    cin >> a;
    while (a != 0)
    {
        digit = a % 10;
        New = New*10 + digit;
        a /= 10;
    }
    cout << "Reverse of digits in this number are : " << New;
}