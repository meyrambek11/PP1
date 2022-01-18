#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int m,k;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        m = a[i];
    }
     for(int i=0;i<n;i++){
        sort(a,a+n);
        k = a[i];
    }
    if(m == k){
        cout << "Interesting";
    }
    else 
    cout << "Not interesting";
    
    
    return 0;
}