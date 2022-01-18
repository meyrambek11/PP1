#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(n != m){
        cout << n+n <<" "<<m+m;
    }
    else if(n == m){
        cout << n << " " << m;
    }
    return 0;
    

}