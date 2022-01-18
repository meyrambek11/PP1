#include <iostream>

using namespace std;

int main(){
    int n,sum = 0;
    cin >> n;
    
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i + j == n-1){
                sum = sum + 1;
                cout<<sum;               
            }
            else{
                cout<<'.';
            }
        }
        cout<<endl;
    }
    return 0;
}