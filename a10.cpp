#include <iostream>
using namespace std;
int main(){
    int x,k;
    int sum = 0;
    cin >> x;
    int a[x];
    for(int i=1;i<=x;i++){
        cin >> a[i];
    }

    for(int i=1;i<=x;i++){
        k = a[i] - a[i-1]; 
        if(k<0){
            k = k*(-1);   
        }
        else if(k>0){
            k = k*1;
        } 
    sum = sum + k;
    }
    
    
    cout << sum;
    return 0;
    

}