#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,d;
    int s;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        sort(a,a+n);  
    }
    for(int i=0;i<n;i++){
        d = a[i+1] - a[i];
        if(d != a[i+1] - a[i]){
            s = i+1;
        }
    }
    
    cout << s;
    return 0;
}