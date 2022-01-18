#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,sum = 0,cnt = 0,add = 0; 
    cin >> n;
    for(int i=0;i<n;i++ ){
        cin >> a;
        if(a>0){
            sum++;
        }
        else if(a<0){
            cnt++;
        }
        else if(a == 0){
            add++;
        }
    }
    cout << "sum of positive numbers equal to " << sum << endl;
    cout << "sum of negative numbers equal to " << cnt << endl; 
    cout << "sum of zeros equal to " << add << endl;
    
}