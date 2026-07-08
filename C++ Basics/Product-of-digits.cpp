#include <iostream>
using namespace std;
int main()
{
    int a, i, Product = 1;
    cout << "Enter any number : ";
    cin >> a;
    while (a != 0)
    {
        i = a % 10;
        Product *= i;
        a /= 10;
    }
    cout << "Product of digits in this number are : " << Product;
}