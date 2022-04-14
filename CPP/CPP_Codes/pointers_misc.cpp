#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int number = 10;
    int *ptr = &number;
    cout << ptr << endl;

    const char *name = "les go brothers"; // will result in a warning if const not used
    char name_in_string[] = "les go in array";
    cout << name << " in pointers representation\n"
         << name_in_string << " in array" << endl;

    const char *a_str = "hello bois it's a me";
    int length = strlen(a_str);
    char *a_str_2 = new char[length + 1];
    strcpy(a_str_2, a_str);
    cout << "Dynamic string with\n"
         << a_str_2;

    void print_Str(char *); // prototype
    return 0;
}
void print_Str(char *str)
{
}