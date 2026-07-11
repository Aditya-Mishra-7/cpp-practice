#include <iostream>
using namespace std;
int main (){
    int n,m;
    cout << "Enter number of columns : ";
    cin >> m ;
    cout << "Enter number of rows : ";
    cin >> n;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=i;j++){
            cout << i ;
        }
        cout << endl ;
    }
}