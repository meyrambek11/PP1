#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int sum = 0;
    bool m = false;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int j=1;j<=n;j++){
        cin >> a[j];
    }
    for(int i=1;i<=n;i++){
        sum=sum + a[i];
    }   
    for(int j=1;j<=n;j++){
        sort(a,a+n);
    }
    
    for(int j=1;j<=n;j++){
    if(sum == a[j] + a[j+1]){
        m = true;    
    } 
    }
    if(m == true){
        cout << "Yes";
    }
    else 
    cout << "No";
    return 0;
    
}