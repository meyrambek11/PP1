#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[13]; 
    int n;
    for(int i=0;i<12;i++){
        cin >> a[i];
        if(a[i] < 0)break;
        n = i+9;  
    }
    cout << "Temperatura " << n << "-sagatta tomendegen" << endl;
}