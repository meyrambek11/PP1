#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=20;i<=50;i++){
        if(i%3 == 0 && i%5 != 0){
            cout << i << " ";
        }
    }
    return 0;
}