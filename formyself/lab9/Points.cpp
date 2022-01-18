#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>   v;
    vector<int>   q;
    int n,x,y;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x >> y;
        v.push_back(x);
        q.push_back(y);
    }
    for(int i = 0;i<v.size()-1;i++){
     for(int j = i+1;j<v.size();j++)
        if(v[i] > v[j]){
            swap(v[i],v[j]);
            swap(q[i],q[j]);
        }
        else if(v[j] == v[i]){
            if(q[i]>q[j]){
                swap(v[i],v[j]);
                swap(q[i],q[j]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout << v[i]<< " " << q[i] << endl;  
    }

    
}