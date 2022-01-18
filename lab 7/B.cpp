#include <iostream>
using namespace std;  
void f(int n, int a){
    if(n == 0) return;
    a = n%2;
    f(n/2,a);
    cout << a;
}
int main(){
    int n;
    cin >> n;
    f(n,1);
}