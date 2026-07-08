#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " is an even number";
    }
    else if (n % 2 != 0)
    {
        cout << n << " is a odd number";
    }
}