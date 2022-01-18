#include <iostream>
using namespace std;
bool real(int n, int a[], int m){
     for(int i=1;i<=n;++i){
        if(a[i] == m){
            return true;
        }
        
    }
    
    return false;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }
    int m;
    cin >> m;
    if(real(n , a, m) == true){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}