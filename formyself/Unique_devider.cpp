#include <iostream>
using namespace std;

string f(int n){
    if(n == 0) return "No";
    if(n == 1) return "Yes";
    if(n%2 == 1) return "No";
    return f(n/2);
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}