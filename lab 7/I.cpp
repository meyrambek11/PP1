#include <iostream>
using namespace std;
void f(int n){
    int sum=0;
    while(cin >> n){
       if(n != 0){
        sum = sum + n;
        }
        if(n == 0){
         break;}
            
    }
    cout << sum;
    
}
int main(){
    int n;
    f(n);
}