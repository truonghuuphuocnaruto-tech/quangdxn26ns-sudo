#include <iostream>
using namespace std;
int f(int a){
    int f1 = 1;
    int f2 = 1;
        if (a < 2)
            return 1;
    return f(a-1) + f(a-2);
}
int main(){
    for (int i = 0; i <= 1000; i++){
        if (f(i) <= 1000)
            cout <<f(i)<<" ";
        else
            break;
    }
} 