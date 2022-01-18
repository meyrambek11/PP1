#include <iostream>
using namespace std;

int f(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return f(n-1) + f(n-2);
}
int gcd(int x, int y){
    if(x%y == 0)return y;
    return gcd(y,x%y);
}
int main(){
    int n,m;
    cin >> n >> m;
    int x =  f(n+1);
    int y = f(m+1);

    cout << (x*y)/gcd(x,y);
}