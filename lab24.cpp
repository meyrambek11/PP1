#include <iostream>

using namespace std;

int main (){
    int x;
    int a=1,sum=0;
    cin >> x;
    /*while (a!=(x+1)) {
     
        sum=sum+a;//sum+=a
        a=a+1;
    }*/
    for (int i=1;i<=x;i++) {

         sum=sum+i;

    }
    cout << sum << endl;
    return 0;
}