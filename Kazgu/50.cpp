#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[14];
    for(int i=0;i<14;i++){
        cin >> a[i];
    }
    sort(a,a+14);
    reverse(a,a+14);
    cout << "En zhanarmai kori kop audandardin zhanmai kori: " << endl;
    for(int i=0;i<3;i++){
        cout << a[i] << " ";
    }
    return 0;
}