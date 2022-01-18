#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,cnt = 0,sum=0;
    int b[500500];
    int i = 0;
    cin >> n;
    while(n>0){
         b[i++]= n%2;
        
        n/=2;   
    }
   for(int j=7;j>=0;j--){
       if(b[j] == 0){
           b[j] = 1;
           break;
       }
       else
       sum++;
    }
    for(int j=7;j>=0;j--){
       cnt = cnt + b[j]*(pow(2,j));
    }
    if(sum == 8){
        cout << cnt - 1;
    }
    else
    cout << cnt;
}