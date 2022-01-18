#include <iostream>

using namespace std;

int main (){
    int x, sum=0;
    cin >>x;

    for (int i=0; i<x; ++i){
        int m;
        cin >>m;
        while (m>0){
            if (m%10 == 0){
                sum++;
            }
            m/=10;
        }
    }
    cout << sum <<endl;
    return 0;
}

