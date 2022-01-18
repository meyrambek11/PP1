#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int> v;
    int n,a,cnt = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(n%2 == 1){   
        cout << v[v.size()/2];
        }
    else if(n%2 == 0){
        cout << v[(v.size()/2)-1] << " " << v[(v.size()/2)];   
    }
return 0;
    
}
