#include <iostream>
using namespace std;
void  f(int n,int t){
    if(n == 0) return;
    t = n%2;
    f(n/2, t);
    cout << t;

}
int main(){
    int n;
    cin >> n;
    f(n,0);
}