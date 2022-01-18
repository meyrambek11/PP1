#include <iostream>
using namespace std;
int main(){
    int a,b,c,k;
    cin >> a >> b >> c;
    k = (a-b) + (a-c);
    if(k < (b+c)){
        cout << k;
    }
    else if(k > (b+c)){
        cout << (b+c);
    }
    
    return 0;
}