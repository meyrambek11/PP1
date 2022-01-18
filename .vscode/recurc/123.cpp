#include <iostream>
using namespace std;

void f(int n){
    int x;
    if(n ==  0) return;
    x = n%10;
    f(n/10);
    cout << x << " ";
    
}
int main(){
    int n;
    cin >> n;
    f(n);
}