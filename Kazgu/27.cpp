#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,cnt = 0,sum = 0;
    for(int i=0;i<3;i++){
        cin >> a;
        sum = sum + a;
        if(a%2 == 0){
            cnt++;
        }
    }
    cout << sum << endl;
    if(cnt == 3){
        cout << "All of numbers are even numbers" << endl;
    }
}