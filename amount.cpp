#include <iostream>

using namespace std;

int main (){
    int n,sum=0;
    cin >> n;
    if(n%2 == 0 && n%5 == 0){
        cout << "Yes";
    }
    else if(n%2 == 0 && n%17 == 0){
        cout << "Yes";
    }
    else if(n%2 == 0 && n%19==0){
        cout << "Yes";
    }
    else if(n%5 == 0 && n%17 == 0){
        cout << "Yes";
    }
    else if(n%5 == 0 && n%19 == 0){
        cout << "Yes";
    }
    else if(n%17 == 0 && n%19 == 0){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}