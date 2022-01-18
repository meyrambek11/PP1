#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b){
        cout << "Yes";
    }
    else if(a == c){
        cout << "Yes";
    }
    else if(b == c){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}