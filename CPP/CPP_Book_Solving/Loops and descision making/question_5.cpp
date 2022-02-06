#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char character;
    cout<<"Enter a character(lowercase/uppercase)\n";
    cin>>character;
    if(islower(character))
        cout<<"Is lower case 'cause nonzero";
    else
        cout<<"Is uppercase 'cause zero";
    return 0;
}
