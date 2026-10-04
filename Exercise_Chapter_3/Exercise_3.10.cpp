#include <iostream>
using namespace std;
int main(){
    cout <<"Chi nhap 1 so nguyen cs 2 chu so: ";
    string a;
    cin >>a;
    string b,c;
    b = a[0];
    c = a[1];
    int d = stoi(b);
    int e = stoi(c);
    cout <<d+e;
}