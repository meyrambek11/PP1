#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,v;
    cin >> a >> b >> c >> d >> e >> f >> v;
    if((a*d + b*e + c*f) <= v){
        cout << "Yes";
    } 
    else
    cout << "No";
    return 0 ;   
}