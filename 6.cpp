#include<iostream>
using namespace std;
int main()
{
   int a[10],pos,i;
   cout<<"Enter 10 number: ";
   for(i=0;i<10;i++)
   {
    cin >> a[i];
   }
   cout << "Enter position: ";
   cin >> pos;
   cout << a[pos];

}