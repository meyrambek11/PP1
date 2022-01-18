#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,max = -1000000, k;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
            k = i+1;
        }
    }
    cout << k;
   return 0;
    
}