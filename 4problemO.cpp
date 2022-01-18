#include <iostream>

using namespace std;

int main(){
    int n,k=0,l=0;
    int sum = 0, maxi = -1e+6;
    cin >>n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i == j){
            if(a[i][j]>maxi){
                maxi = a[i][j];
                k=i;
                l=j;
            }
               
                
            }     
        }    
    }

    cout << "Maximum element is:" << " " << maxi << " " << "with coordinates:" << " " << k+1 << ";" << l+1;
            
                
       
    
    
    return 0;
    
        
}