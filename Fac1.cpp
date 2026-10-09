// Factorial
#include<iostream>
using namespace std;
int fact(int);
main(){
    int a,ans;
    cout<<"Enter number: "<<endl;
    cin >> a;
    ans=fact(a);
    cout<<"Factorial of number is: "<<ans<<endl;
}
int fact(int num){
    int i=1,f=1;
    while(i<=num)
    {
        f*=i;
        i++;
    }
    return f;
}


