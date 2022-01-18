#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int cnt;
    int x;
    int a;
    cin >> x;
    for(int i = 0;i<x;i++){
        cin >> a;
        v.push_back(a);
    }
    int b;
    cin >> b;
    for(int i = 0;i<v.size();i++){
        if(v[i] == b){ 
            cnt++;   
        }
    }  
    
    if(cnt != 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}