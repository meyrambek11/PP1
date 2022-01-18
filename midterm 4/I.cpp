#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(b == 0 || c == 0 || a==0){
        cout << "No";
    }
    else if( c*c == a*a + b*b){
        cout << "Yes";
    }
    
    else if( a*a == c*c + b*b){
        cout << "Yes";
    }
    else if( b*b == a*a + c*c){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}