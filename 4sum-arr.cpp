#include<iostream>
using namespace std;
int main()
{
   int a[10],i,sum=0;
   cout << "Enter 10 num: ";
   for(i=0;i<10;i++)
   {
    cin >> a[i];
   }
   cout << "\n My array is\n";
   for(i=0;i<10;i++)
   {
    sum=sum+a[i];
    cout << a[i]<<" ";
    
   }
   cout <<"\n The sum is: \n"<< sum <<"\n";

}