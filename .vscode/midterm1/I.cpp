#include <iostream>
using namespace std;
int main(){
    int n,cnt = 0;
    int b[500500];
    int i = 0;
    cin >> n;
    while(n>0){
         b[i++]= n%2;   
        n/=2;   
    }
    for(int j=7;j>=0;j--){
       if(b[j] == 1){
           cnt++;
       }
   }
   cout << cnt;
   return 0;
}