#include <iostream>
using namespace std;
int main ()
{
    int cp=0, sp=0, profit ;
    
    cout << "Enter the Cost Price :";
    cin >> cp ;
    cout << "Enter the Selling Price :";
    cin >> sp ;
    
    if (sp > cp)
    {
        cout << "You are in Profit!\n";
        profit = sp - cp ;
        cout << "Profit of :" << profit << " is made.";
    }
    else if (cp > sp)
    {
        cout << "You are in Loss!\n";
    }
    else
    {
        cout << "No profit no loss.";
    }
    
}