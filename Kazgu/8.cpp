#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a > 0 && b > 0){
        cout << "A(" << a << ";" << b << ")" << " nuktesi birinshi shirekte ornalaskan" << endl;
    }
    else if(a < 0 && b > 0){
        cout << "A(" << a << ";" << b << ")" << " nuktesi ekinshi shirekte ornalaskan" << endl;
    }
    else if(a < 0 && b < 0){
        cout << "A(" << a << ";" << b << ")" << " nuktesi ushinshi shirekte ornalaskan" << endl;
    }
    else if(a > 0 && b < 0){
        cout << "A(" << a << ";" << b << ")" << " nuktesi tortinshi shirekte ornalaskan" << endl;
    }
    return 0;

}