#include <iostream>
using namespace std ;
int main ()
{   
    int x_coordinate , y_coordinate ;
    cout << "Enter the value for \n";
    cout << "x_coordinate : ";
    cin >> x_coordinate ;
    cout << "y_coordinate : ";
    cin >> y_coordinate ;
    if (x_coordinate == 0 && y_coordinate == 0)
    {
        cout << "Point lies on the origin.\n";
    }
    else if (x_coordinate != 0 && y_coordinate == 0)
    {
        cout << "Point lies on the x-axis.\n";
    }
    else if (x_coordinate == 0 && y_coordinate != 0)
    {
        cout << "Point lies on the y-axis.\n";
    }
    else if (x_coordinate > 0 && y_coordinate > 0)
    {
        cout << "Point lies in the first quadrant.\n";
    }
    else if (x_coordinate < 0 && y_coordinate > 0)
    {
        cout << "Point lies in the second quadrant.\n";
    }
    else if (x_coordinate < 0 && y_coordinate < 0)
    {
        cout << "Point lies in the third quadrant.\n";
    }
    else if (x_coordinate > 0 && y_coordinate < 0)
    {
        cout << "Point lies in the fourth quadrant.\n";
    }
    return 0 ;
}