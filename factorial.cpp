#include <iostream>
using namespace std;
int f(int p){
    int n=1;
    for(int i=1;i<=p;i++){
        n=n*i;
    }
    return n;
}
int main(){
    int p;
    
    cin >> p;
    cout << f(p);
    return 0;
}