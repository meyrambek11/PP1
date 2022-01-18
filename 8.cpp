#include <iostream>
#include <algorithm>
using namespace std;
int f(int x, int y){
    return abs(y-x);
}
int main(){
    int x;
    int y;
    cin >> x >> y;
    cout << f(x,y);
    return 0;
}