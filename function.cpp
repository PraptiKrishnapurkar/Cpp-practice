// Area of Rectangle
#include<iostream>
using namespace std;
int area(int,int);
main(){
    int a,b,c;
    cout<<"Enter two num: "<<endl;
    cin >> a >> b;
    c=area(a,b);
    cout<<"Area of reactangle: "<<c<<endl;
    

}
int area(int x,int y)
{
    int area=x*y;
    return area;
}
