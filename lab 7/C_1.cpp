#include <iostream>
using namespace std;

string f(int n, int a[], int x, int l, int r){
    int m = (l+r)/2;
    if(l<=r){
        if(a[m] == x) return "Yes";
        if(a[m] < x)
         return f(n,a,x,m+1,r);
        if(a[m] > x);
         return f(n,a,x,l,m-1);
    }
    
    return "No";
}
int main(){
    int n;
    int a[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << f(n,a,x,0,n-1);
}