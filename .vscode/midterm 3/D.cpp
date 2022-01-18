#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int d,e,f;
    cin >> d >> e >> f;
    if(c<f){
        cout << "Yes";
    }
    else if(c == f && b < e){
        cout << "Yes";
    }
    else if(c == f && b == e && a<d){
        cout << "Yes";
    }
    else 
    cout << "No";
    return 0;
}