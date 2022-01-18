#include <iostream>
using namespace std;

bool  f(int n){
    if(n == 1) return true;
    if(n < 1) return false;
    return f(n-3) || f(n-5);
}
int main(){
    int n;
    cin >> n;
    if(f(n) == true){
        cout << "YES";
    }
    else
    cout << "NO";
}