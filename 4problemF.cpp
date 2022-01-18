#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    long long maxi=-1e+10;
    int y=0,x=0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j]>maxi){
               maxi = a[i][j],y=i+1,x=j+1;
               
               
                
            }        
        }    
    }
    cout << y << " " << x;
    
  
    
    return 0;
    
        
}