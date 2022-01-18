#include <iostream>

using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    for(int i=1;i<=n;++i){
    if(n%7 == 0){
      sum = sum+1;
    }
    else if(n%7 == 2){
        sum=sum+1;
    }
    }
    cout << sum;
    
    return 0;
}