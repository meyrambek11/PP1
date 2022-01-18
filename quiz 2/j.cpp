#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    bool m = false;
    cin >> a >> b >> c;
    if(b>c){
        if(a>b-c && a<b+c){
            m = true;
        }
    }
    else if(b<c){
        if(a>c-b && a<b+c){
            m = true;
        }
    }
    else if(a>c){
        if(b>a-c && b<a+c){
            m = true;
        }
    }
    else if(a<c){
        if(b>c-a && b<c+a){
            m = true;
        }
    }
    else if(a>b){
        if(c> a-b && c<a+b){
            m = true;
        }
    }
    else if(a<b){
        if(c>b-a && c<a+b){
            m = true;
        }
    }
    else{
        m = false;
    }
    if(m == true){
        cout << "Yes";
    }
    else if(m == false){
        cout << "No";
    }
    return 0;
}