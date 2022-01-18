#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int m,l=1;
    for(int i=1;i<=m;i++){
        l = i*2;
    }
    if(x == l){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}