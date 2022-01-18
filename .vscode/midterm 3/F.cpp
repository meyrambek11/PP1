#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>c && a+b >= d+c){
        cout << "Yes";
    }
    else 
    cout << "No";
    return 0;
}