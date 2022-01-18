#include <iostream>

using namespace std;

int main(){
    string a;
    string b;
    //int cnt = 0;
    cin >> a >> b;

    // for(int i = 0; i < a.size(); i++){
    //     if(a[i] == b[i]){
    //         cnt++;
    //     }
    // }

    // if(a.size() == cnt){
    //     cout <<"yes";
    // }
    // else{
    //     cout <<"no";
    // }
    
    
    if(a == b){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    
    return 0;    
    
}

