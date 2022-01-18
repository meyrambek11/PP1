#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n;
    if(n%2 == 1 ){
        cout << n + 1;
    }
    else if(n%2 == 0){
        cout << n+2;
        }
    return 0;
}