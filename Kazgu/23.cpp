#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,cnt = 0,sum = 0;
    for(int i=0;i<3;i++){
        cin >> a;
        if(a < 0){
            cnt++;
        }
        sum = sum + a*a;
    }
    cout << sum << endl;
    if(cnt == 3){
        cout << "all of numbers are negative" << endl;
    }

}