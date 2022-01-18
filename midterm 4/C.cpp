#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=95 && n<=100){
        cout << "A";
    }
    else if(n>=90 && n<=94){
        cout << "A-";
    }
    else if(n>=85 && n<=89){
        cout << "B+";
    }
    else if(n>=80 && n <= 84){
        cout << "B";
    }
    else if(n>=75 && n<=79){
        cout << "B-";
    }
    else if(n>=70 && n<=74){
        cout << "C+";
    }
    else if(n>=65 && n<=69){
        cout << "C";
    }
    else if(n>=60 && n<=64){
        cout << "C-";
    }
    else if(n>=55 && n<=59){
        cout << "D+";
    }
    else if(n>=50 && n<=54){
        cout << "D";
    }
    else if(n>=0 && n<=49){
        cout << "F";
    }
    return 0;

}