#include <iostream>
using namespace std;
int f(int n){
    int sum=0;
    while(n>0){
        sum = sum + n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}