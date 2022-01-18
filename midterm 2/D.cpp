#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int x,i=0,sum = 0;
    int a[500500];
    cin >> x;
    while(x>0){
        
        a[i++] = x%2;
         
        x=x/2;      
    }
    for(int j=7;j>=0;j--){
       if(a[j] == 1){
            a[j] = 0;
        }
        else if(a[j] == 0){
            a[j] =1;
        }
        
        
    }
    for(int j=7;j>=0;j--){
        if(a[j] == 1){
            sum = sum + pow(2,j);
        }
    }
    cout << sum;
    
    return 0;
}