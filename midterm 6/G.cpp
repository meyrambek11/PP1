#include <iostream>
using namespace std;
int main(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a*b == x*y){
        cout << "Thanks, Nurbek";
    }
    else if(a <= x && b <= y || a<= y && b <= x){
        cout << "Thanks, Nurbek";
    }
    else 
    cout << "Impossible";
}