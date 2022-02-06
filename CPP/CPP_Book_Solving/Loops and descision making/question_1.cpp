#include <iostream>
using namespace std;

int main()
{
    float gallons, cubic_feet;
    cout << "Enter gallons to be converted\n";
    cin >> gallons;
    cubic_feet = gallons * 7.481;
    cout << gallons << " in cubic feet is " << cubic_feet;
    return 0;
}