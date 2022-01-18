#include <iostream>
using namespace std;
int main(){
    int a,b,x,y;
    bool c=false;
    cin >> a >> b >> x >> y;
    if(x == (a/2) && y == (b/2)){
        c = false;
    }
    else if(x == (a/2)){
        c = true;
    }
    else if(y == (b/2)){
        c = true;
    }
    
    
    if(c == true){
        cout << "Yes";
    }
    else if(c == false){
    cout << "No";
    }
    
    return 0;
}