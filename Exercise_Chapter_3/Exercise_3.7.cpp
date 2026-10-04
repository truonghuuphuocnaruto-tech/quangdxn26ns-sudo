#include <iostream>
using namespace std;
int main(){
    int x,y,p,s;
    cout <<"Enter x,y: ";
    cin >>x>>y;
    p = x*y;
    s = x+y;
    cout <<"p=x*y: "<<p<<endl;
    cout <<"s=x+y: "<<s<<endl;
    cout <<"q=s2+p(sx)*(p+y): "<<s*2+p*(s*x)*(p+y);
}