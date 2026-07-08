#include <iostream>

int main()
{

    int circumference, radius;
    const double PI = 3.14;
    radius = 10;
    circumference = 2 * PI * radius;
    std::cout << "Circumference of the circle is " << circumference << '\n';
    return 0;
}