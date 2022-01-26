#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number ";
    int getNumber;
    cin >> getNumber;
    int sum = 0, sumOfDigits = 0, temporary = getNumber; 
    bool isMagic;
    do
    {
        while (temporary > 0)//finding sum of digits
        {
            sumOfDigits += temporary % 10;
            temporary /= 10;
        }
        sum = sumOfDigits;
        temporary = sum;
        sumOfDigits = 0;
    } while (sum > 9);
    if (sum == 1)
    {
        isMagic = true;
    }
    if (isMagic)
    {
        cout << "\n"
             << getNumber << " is a magic number";
    }
    else
    {
        cout << "\n"
             << getNumber << " is not a magic number";
    }
}
