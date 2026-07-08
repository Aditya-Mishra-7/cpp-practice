#include <iostream>
using namespace std;
int main()
{
    int n, Fact = 1;
    cout << "Enter the value for n : ";
    cin >> n;
    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            Fact *= i;
        }
        cout << "Factorial till n is : " << Fact;
    }
    else
    {
        cout << "Invalid input!";
    }
}