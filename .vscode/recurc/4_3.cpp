#include <iostream>
using namespace std;
 int f(int n, int m, int s){
     if(m == n) return s;
     s = s + m;
     return f(n,m+1,s);
 }
 int main(){
     int n;
     cin >> n;
     int s = 0;
     cout << int(f(n,0,s));

 }