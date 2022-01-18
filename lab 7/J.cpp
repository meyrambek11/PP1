#include <iostream>
using namespace std;
 int f(int n,int sum){
     if(n == 0) return sum;
     sum = sum + (n%10)/2;
     return f(n/10,sum);
 }
 int main(){
     int n;
     int sum = 0;
     cin >> n;
     cout << f(n,sum);
     return 0;
 }