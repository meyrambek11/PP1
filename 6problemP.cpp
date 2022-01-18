#include <iostream>
using namespace std;
int f(int n, int m){
    if(n<=0){
        m=n*(-1);
    }
    else if(n>=0){
        m=n*1;
    }
    return m;
}
int main(){
    int n;
    int m;
    cin >> n;
    cout << f(n,m);
    return 0; 
}