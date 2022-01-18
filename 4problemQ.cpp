#include <iostream>
 using namespace std; 
 int main(){
    int n; 
    cin>>n; 
    for(int i=0;i<n;i++){ 
        for(int j=i;j<n;j++)
        cout<<' '; 
        for(int k=n;k>=n-(2*i);k--)  
        cout<<'*';  
        cout<<endl;
    } 
    return 0;
 }