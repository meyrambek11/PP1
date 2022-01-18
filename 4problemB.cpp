#include <iostream>

using namespace std;

int main(){
    int n;
    long long m1=-1e+10,m3=-1e+10;
    long long m2=-1e+10;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j] > m1){
                m2 = m1;
                m1 = a[i][j];
            }
            else if(a[i][j] > m2 && a[i][j] != m1 ){
                m3 = m2;
                m2 = a[i][j];
            }
            
        }
        
    }
    if(m2 == m3){
        cout << "0";
    }
    else
    cout << m2;
    return 0;        
}