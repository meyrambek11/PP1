#include <iostream>

using namespace std;

int factorial (int n){
    int f=1;
    for(int i=2;i<=n;++i){
        f=f*i;
    }
    return f;   
}
int main(){
    int m,k;
    cin >> m >> k;
    cout << factorial(m)/(factorial(k)*factorial(m-k)) << endl;
    return 0;

}