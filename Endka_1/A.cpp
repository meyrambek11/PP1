#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    int x,y,sum = 0;
    cin >> n >> m;
    cin >> k;
    for(int i=0;i<k;i++){
        cin >> x >> y;
    }
    for(int i=0;i<k;i++){
        if(x<n && y<m){
            sum++;
        }
    }
    cout << (n*m)-sum << endl;
}