#include <iostream>
using namespace std;
void f(int m, int n){
    double x = (n*100);
    x =x /m;
    cout << x;
    
}
int main(){
    int m, n;
    cin >> m >> n;
    f(m,n);
    return 0;
}