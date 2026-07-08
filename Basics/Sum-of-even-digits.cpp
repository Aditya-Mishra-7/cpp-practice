#include <iostream>
using namespace std;
int main()
{
    int a, digit, Sum = 0;
    cout << "Enter any number : ";
    cin >> a;
    while (a != 0)
    {
        digit = a % 10;
        if (digit%2 == 0){
        Sum += digit;
        }
        a = a / 10 ;
    }
    cout << "Sum of even digits in this number are : " << Sum;
}