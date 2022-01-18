#include <iostream>
using namespace std;
int main(){
    int x;
    int sum = 0;
    while (true){
        cin >> x;
        if(x>=0){
            sum++;
    
        }
        if(x<0){
            break;
        }
    } 
    cout << sum;
   
    return 0;
}