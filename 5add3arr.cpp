#include<iostream>
using namespace std;
int main()
{
   int a[10],b[10],c[10],d[10],i,sum=0;
   cout << "Enter 10 num: ";
   for(i=0;i<10;i++)
   {
    cin >> a[i];
   }
   cout << "\n My First array is\n";
   for(i=0;i<10;i++){
    cin >> a[i];
   }
   cout << "\n My Second array is\n";
   for(i=0;i<10;i++){
    cin >> b[i];
   }
   cout << "\n My third array is\n";
   for(i=0;i<10;i++){
    cin >> c[i];
   }
   for(i=0;i<10;i++){
    d[i]=a[i]+b[i]+c[i];
   }

   cout <<"\n The sum is: \n";
   for(i=0;i<10;i++){
    cout << d[i] << " ";
   }


}