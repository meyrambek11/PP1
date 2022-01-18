#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a == 0 || b == 0 || c == 0 || d == 0){
        cout << "There are exist at least one 0" << endl;
    }
    else{
        if(a%b == 0 && c%d == 0){
            cout << "the equation is true" << endl;
        }
        else
        cout << "the equation is false" << endl;
    }
}