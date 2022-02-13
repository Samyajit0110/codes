#include<iostream>
#include<stdio.h>
#include <string>  
#include<cstring>
using namespace std;
int val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
}  
int toDeci(char *str, int base) 
{ 
    int len = strlen(str); 
    int power = 1;
    int num = 0; 
    int i; 
    for (i = len - 1; i >= 0; i--) 
    {  
        if (val(str[i]) >= base) 
        { 
           cout<<("Invalid Number"); 
           return -1; 
        } 
        num += val(str[i]) * power; 
        power = power * base; 
    } 
  
    return num; 
} 
int main() 
{ 
    char str[] = "11A"; 
    int base = 16; 
    cout<<("Decimal equivalent of %s in base %d is %d", str, base, toDeci(str, base)); 
    return 0; 
}