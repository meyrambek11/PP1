#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("output.txt","w",stdout);
    vector<int> v;
    int n;
    int a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v.size()-1;j++){
            for(int k=j+1;k<v.size();k++){
                if(v[j]==v[k]){
                    v.erase(v.begin()+k);
                }
            }
        }
    }
    do{
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        
        cout << endl;
    }while(next_permutation(v.begin(),v.end()));
   
    return 0;

}