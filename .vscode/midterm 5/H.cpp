#include <iostream>
#include <algorithm>
using namespace std;
int f(int x1, int x2){
    return abs(x2 - x1);
}
int main(){
    int n,cnt = 0;
    cin >> n;
    int x;
    int y=0;
    cin >> y;
    for(int i=1;i<n;i++){
        cin >> x;
        cnt=cnt + f(x,y);
        y = x;
    }
    cout << cnt;
    return 0;
}