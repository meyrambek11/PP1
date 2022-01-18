#include <iostream>
using namespace std;
void f(int m, int a[]){
    int sum=0;
    for(int i=1;i<=m;++i){
        sum = sum +a[i];
    }
    int x;
    if(x = sum/(m%10)){
        cout << "Yes";
    }
    else
    cout << "No";

}
int main(){
    int m;
    int a[500500];
    cin >> m;
    f(m,a);
    return 0;
}