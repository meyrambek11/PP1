#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b;
    cin >> x >> y;
    cin >> a >> b;
    if((b+x) > (y+a)){
        cout << "Barsenal" <<endl;
        cout << b+x << " " << y+a;
    }
    else if((b+x) < (y+a)){
        cout << "Arselona" << endl;
        cout << b+x << " " << y+a;
    }
    else if((x+b) == (y+a)){
        if(y > b){
           cout << "Arselona" << endl;
           cout << b+x << " " << y+a;    
        }
        else if(y < b){
            cout << "Barsenal" <<endl;
            cout << b+x << " " << y+a;
        }
        else if(y == b){
            cout << "Friendship" << endl;
            cout << b+x << " " << a+y;
        }
    }
    return 0;
}