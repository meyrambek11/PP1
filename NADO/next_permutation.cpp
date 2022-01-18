#include <bits/stdc++.h>
using namespace std;

bool Palindrome(vector<int> v){
    for(int i=0;i<v.size()/2;i++){
        if(v[i] != v[v.size()-1-i]){
            return false;
        }

    }
    return true;
}
int main(){
    //freopen("output.txt","w",stdout);
    vector<int> v;
    int n;
    cin >> n;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    do{
        if(Palindrome(v)){
          for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
          }
          return 0;
        }
        
    }while(next_permutation(v.begin(),v.end()));
    if(!Palindrome(v)){
        cout << "Impossible";
    }
}