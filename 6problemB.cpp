#include <iostream>
using namespace std;
int s[500500];
void  diff(int a[], int n, int b[]){
    
    for(int i=1;i<=n;++i){
       if(a[i] >= b[i]){
        s[i] = a[i] - b[i];
       }
       else if(a[i] <= b[i]){
        s[i] = b[i] - a[i];
       }
    }
      
}
int main () {
    int n;
    cin >> n;
    int a[n+1],b[n+1];
    
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }
    for(int i=1;i<=n;++i){
        cin >> b[i];
    }
    diff(a , n , b);
    for(int i=1;i<=n;++i){
    cout << s[i] << " ";
    }
    
    return 0;
}