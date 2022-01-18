#include <iostream>
using namespace std;

void f(int n, int sum){
    if(n == 0) return;
    sum = sum + n;
    f(n,sum);
    cout << sum;
}
int main(){
    int n;
    while(cin >> n){
        if(n != 0){
            f(n,0); 
        }
        if(n == 0){
            break;
        }
        
    }
    
   
}