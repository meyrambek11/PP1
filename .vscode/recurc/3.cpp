#include <iostream>
using namespace std;
int f(int a){
    if(a<1) return 0;
    a--;
    cout << a << " ";

    return f(a);
}
int main(){
    int a;
    cin >> a;
    f(a);
}