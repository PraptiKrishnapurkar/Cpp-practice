
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int l;
    char name[10],surname[10];
    cout<<"Enter your name: ";
    gets(name);
    cout<<"Enter your surname: ";
    gets(surname);
    strcpy(name,surname);
    puts(name);
    
}