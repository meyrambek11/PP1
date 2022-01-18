#include <iostream>

using namespace std;

int main (){
    int n,sum=0;
    cin >> n;

    int a[500500];
    for (int i=1;i<=n;i=i+1){
    cin >> a[i];}
    for(int i=1;i<=n;i=i+1){
    if(a[i] > 0){
       
       sum = sum + 1;
    }
    }
    cout << sum;
    return 0; 
}