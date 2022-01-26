#include <iostream>
#include <string>
using namespace std;

class converter
{
private:
    int num_array[10];
    int get_input;
    string choice;

public:
    void get_data();
    void to_binary();
    void to_decimal();
    void to_octal();
    void tp_hexadecimal();
};

void converter::get_data()
{
    cout << "Enter a number\n";
    cin >> get_input;
    cout << "Enter your choice\n";
    cin >> choice;
}

void converter::to_binary()
{
    int temporary = get_input;
    int i = -1;
    while (temporary > 0)
    {
        i++;
        num_array[i] = temporary % 2;
        temporary /= 2;
    }
    for (i; i >= 0; i--)
    {
        cout << num_array[i];
    }
    cout << endl;
}

void converter::to_decimal()
{
    int base, index = 0;
    cout << "Enter base of number\n";
    cin >> base;
}
int main()
{
    converter convert0;
    convert0.get_data();
    convert0.to_binary();
    return 0;
}
