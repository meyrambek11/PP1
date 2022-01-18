#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int l,m;
    cin >> a >> b >> c;
    l = b-a;
    if(l<0){
        l = l*(-1);
    }
    m = c-a;
    if(m<0){
        m = m*(-1);
    }
    if(l>m){
        cout << b << l;
    }
    else if(m>l){
        cout << "tochka" << " " << c << "Rostayanie tochki" << " "<< m;
    }
    return 0;
}