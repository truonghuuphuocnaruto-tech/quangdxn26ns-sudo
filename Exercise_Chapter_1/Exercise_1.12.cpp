#include <iostream>
using namespace std;
int main(){
    int a = 1, b = 2, c; // c là biến lưu tạm thời
    cout <<"The initial value of a: "<<a<<endl;
    cout <<"The initial value of b:  "<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout <<"The value of a afterwards: "<<a<<endl;
    cout <<"The value of b afterwards: "<<b;
}