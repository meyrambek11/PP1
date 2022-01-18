#include <iostream>
#include <algorithm>
using namespace std;
int f(int n, int s, int m){
    if(n == m) return s; 
    return f(n + 1, s + n, m);
}
int main(){
    int n;
    cin >> n;
    cout << f(1, 0, n + 1);
}

