#include <iostream>
using namespace std;
int main()
{
    int a, i = 0;
    cout << "Enter any number : ";
    cin >> a;
    while (a != 0)
    {   
        a = a / 10;
        i++;
    }
    cout << "Digits in this number are : " << i;
}