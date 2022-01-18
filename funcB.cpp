#include <iostream>

using namespace std;
int step(int x, int m){
    int l=1;
    for(int i=1;i<=m;++i){
        l = l*x;
    }
    return l;
}
int main(){
    int x,m;
    cin >> x >> m;
    cout << step(x,m) << endl;
    return 0;
}