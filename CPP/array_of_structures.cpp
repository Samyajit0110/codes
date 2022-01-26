#include <iostream>
#include <string>
using namespace std;

struct money_bills
{
    int rs50;
    int rs100;
    int rs1000;
    int rs2000;
    string payer;
};
int main()
{
    money_bills array[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter name of payer\n";
        cin >> array[i].payer;
        cout << "Enter no. of rs 50 bills\n";
        cin >> array[i].rs50;
        cout << "Enter no. of rs 100 bills\n";
        cin >> array[i].rs100;
        cout << "Enter no. of rs 1000 bills\n";
        cin >> array[i].rs1000;
        cout << "Enter no. of rs 2000 bills\n";
        cin >> array[i].rs2000;
        cout << endl;
        cout << endl;
    }
    cout<<"Displaying the input info\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "50 rs bills : " << array[i].rs50 << endl;
        cout << "100 rs bills : " << array[i].rs100 << endl;
        cout << "1000 rs bills : " << array[i].rs1000 << endl;
        cout << "2000 rs bills : " << array[i].rs2000 << endl;
        cout << "From payer : " << array[i].payer << endl;
        cout<<endl;
    }
    return 0;
}