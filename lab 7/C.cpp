#include <iostream>
using namespace std;

int f(int n, int a[], int x){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(a[i] == x){
            cnt++;
        }
    }
    return cnt;
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(f(n,a,x) == 1){
        cout << "Yes";
    }
    else  
    cout << "No";
}