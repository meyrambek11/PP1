#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int c,d;
    cin >> c >> d;
    if(c>a){
        cout << "Yes";
    }
    else if(c == a && d>b){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}