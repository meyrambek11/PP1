#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> even;
    vector<int> odd;
    vector<int> s;
    int n;
    cin >> n;
    int a;
    for(int i = 0;i<n;i++){
        cin >> a;
        s.push_back(a);
    }
    for(int i = 0;i<s.size();i++){
        if(s[i]%2 == 0){
            even.push_back(s[i]);
        }
        else if(s[i]%2 == 1){
            odd.push_back(s[i]);
        }
    }
    sort(even.begin(),even.end());
    reverse(even.begin(),even.end());
    for(int i = 0;i<even.size();i++){
        cout << even[i] << " ";
    }
    sort(odd.begin(),odd.end());
    for(int j = 0;j < odd.size();j++){
        cout << odd[j] << " ";
    }
return 0;
}
