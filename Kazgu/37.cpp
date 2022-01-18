#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    for(int i=1;i<=50;i++){
        if(i%5 == 0 || i%7 == 0){
            sum = sum + i;
        }
    }
    cout << sum;
}