#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(2*(a+b) > a*b){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}