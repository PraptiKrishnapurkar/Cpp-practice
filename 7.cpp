#include<iostream>
using namespace std;
int main()
{
   int a[10],num,i;
   cout<<"Enter 10 number: ";
   for(i=0;i<10;i++)
   {
    cin >> a[i];
   }
   cout << "Enter Element: ";
   cin >> num;
   for(i=0;i<10;i++){
    if(a[i]==num){
    cout<<"Position of element: \n"<<i;
   }

   }
}