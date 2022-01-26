#include<iostream>
using namespace std;
int main()
{
    char character;
    int convertedToInt = (int)character;
    float convertedToFloat;
    character = 'a';
    cout<<(float)character<<"\n";
    cout<<(char)convertedToInt<<"\n";//dosen't work
}
