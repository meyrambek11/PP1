#include <iostream>

using namespace std;

int main(){
    int n;
    int maxi=-1e+6;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j] > maxi){
                maxi = a[i][j];
            }
            
                
        }
        
    }
    cout << maxi;
  
    
    return 0;
    
        
}