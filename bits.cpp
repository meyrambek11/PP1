#include <iostream>

using namespace std;
int main(){
   int x, sum = 0,zero = 0;
   cin >> x;
   for(int i=1;i<=8;++i){
       if((x & (zero)) == (zero)){
           sum = sum + 1;
       }
       zero=zero*2;
   }
   cout << sum;
        
    
    
    return 0;
}