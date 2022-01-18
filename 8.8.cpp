#include <iostream>
using namespace std;
int main (){
    int x;
    int a[x];
    cin >> x;
    for(int i=0;i<x;++i){
        cin >> a[i];
    }
    for(int i=0;i<x;++i){
        if(a[i] < 0){
            a[i] = a[i]*(-1);
        }
    }
    for(int i=0;i<x;++i)
    cout << a[i] << " ";

    
    
    return 0;
}