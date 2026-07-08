#include <iostream>
using namespace std;
int main()  
{
    int a, b;
    cout << "Enter values for a and b :";
    cin >> a >> b;
    ((a >= b) ? cout << a : cout << b);
    return 0;
}