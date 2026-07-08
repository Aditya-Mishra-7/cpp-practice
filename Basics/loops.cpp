#include <iostream>
using namespace std;
int main()
{
    // 3,12,48,....
    int n ;
    cout << "Enter value for n : ";
    cin >> n ;
    int a = 3 ;
    for (int i=1 ; i<=n ; i++)
    {
         cout << a << " " ;
         a = a*4 ;
    }
    return 0;
}
