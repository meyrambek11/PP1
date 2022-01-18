#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    for(int i=0;i<4;i++){
        cin >> a;
        if(a<0){
            cout << a*a << " ";
        }
        else if(a>0){
            cout << sqrt(a) << " ";
        }
    }
    return 0;
    
}