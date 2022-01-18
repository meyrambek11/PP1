#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if((x*y) > z){
        cout <<"Yes";
    }
    else if((x*y) < z){
        cout << "No";
    }
    else if(x*y == z){
        cout << "No difference";
    }
    return 0;
}