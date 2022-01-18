#include <iostream>
using namespace std;
int main (){
    int x;
    cin >> x;
    int a[x];
    
    
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    int max = a[0];
    for(int i=0;i<x;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    int n = 1;
    for(int i = 0; i < x; i++){
        if(max == a[i]){
            a[i] = n;
        }
        else{ 
        a[i] = 0;
        }
    }
    for(int i=0;i<x;i++){
    cout << a[i] << " ";
    }
    return 0;

}