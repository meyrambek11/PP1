#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> s;
    int n;
    while(cin >> n){
       if(n == 0){
           break;
       }
       s.push_back(n);
    }
    sort(s.begin(),s.end());
    for(int i = 0;i<s.size();i++){
        cout << s[i] << " ";
    }

    return 0;

}