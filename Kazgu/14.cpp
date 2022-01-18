#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a%7 == 1){
        cout << "Monday" << endl;
    }
    else if(a%7 == 2){
        cout << "Tuesday" << endl;
    } 
    else if(a%7 == 3){
        cout << "Wednesday" << endl;
    }
    else if(a%7 == 4){
        cout << "Thusday" << endl;
    }
    else if(a%7 == 5){
        cout << "Friday" << endl;
    }
    else if(a%7 == 6){
        cout << "Saturday" << endl;
    }
    else if(a%7 == 0){
        cout << "Sunday" << endl;
    }
}