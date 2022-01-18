#include <iostream>
using namespace std;
void f(int n){
    if(n%2 == 0){
        cout << "2";
    }
    else if(n%3 == 0){
        cout <<"3";
    }
    else if(n%5==0){
        cout << "5";
    }
    else if(n%7 == 0){
        cout << "7";
    }
}
int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}