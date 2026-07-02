#include <iostream>
#include <iomanip>

int main()
{
    int height = 6;
    double salary = 500000.1;
    char security = 'Z';
    std::string name="Aditya"; 

    std::cout << "I am " << name << " Kumar Mishra." << '\n';
    std::cout << "My height is " << height << "feet." << '\n';
    std::cout << "I am earning " << std::setprecision(8) << salary << " lakhs per month." << '\n';
    std::cout << "I have a " << security << "+ security" << "\n";
    return 0;
}