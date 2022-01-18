#include <iostream>

using namespace std;

int main(){
    int n,sum=0,maxi=0;
    cin >> n;
    int a[500500];
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }
    for(int i=1;i<=n;++i)
        maxi= max(maxi, a[i]);
    for(int i=1;i<=n;++i)
        if(maxi == a[i]){
            maxi = a[i];
            sum = sum+1;
        }
    
    cout << sum;
    
    

    return 0;
}