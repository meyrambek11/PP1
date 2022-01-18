#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,sum = 0;
    for(int i=0;i<3;i++){
        cin >> a;
        if(a == 0){
            sum++;
        }
    }
    cout << sum;
}