#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    if ((a or b or c or d or e >= 0) and (a or b or c or d or e) <= 10){
        cout <<"==========Diem kiem tra==========\n";
        cout <<"Nhap diem kiem tra 1: ";
        cin >>a;
        cout <<"Nhap diem kiem tra 2: ";
        cin >>b;
        cout <<"Nhap diem kiem tra 3: ";
        cin >>c;
        cout <<"==========Diem thi gia ky==========\n";    
        cout <<"Nhap diem thi giua ky: ";
        cin >>d;
        cout <<"==========Diem thi cuoi ky==========\n";   
        cout <<"Nhap diem thi cuoi ky: ";
        cin >>e;
        cout <<"Tong diem kiem tra: "<<a+b+c<<endl;
        cout <<"Diem thi giua ky: "<<d<<endl;
        cout <<"Diem thi cuoi ky: "<<e<<endl;
    }
    else{
        cout <<"k hop ke";
    }
}