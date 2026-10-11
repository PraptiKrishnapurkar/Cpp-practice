#include<iostream>
using namespace std;
void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
main()
{
    int a=10,b=20;
    swap(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}