#include <iostream>
using namespace std;
int main(){
    int n,cnt = 0;
    cin >> n;
    for(int i = 2;i<n-1;i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt != 0){
        cout << "NO";
    }
    else 
    cout << "YES";
}