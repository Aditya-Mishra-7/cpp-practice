#include <iostream>
using namespace std;
int main()
{
    int a, i, Sum = 0;
    cout << "Enter any number : ";
    cin >> a;
    while (a != 0)
    {
        i = a % 10;
        Sum += i;
        a /= 10;
    }
    cout << "Sum of digits in this number are : " << Sum;
}