#include <iostream>

using namespace std;

int main (){
    int x;
    cin >> x;
    int a=0;
    int b=0;

    for (int i=0; i<x; i=i+1){
        int m;
        cin>>m;
        if(m%2 == 0){
            a = a + 1;
        }
        else{
            b = b + 1;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}