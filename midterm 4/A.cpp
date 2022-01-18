#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n,cnt = 0,m;
    int b[500500],a[500500];
    int i = 0;
    cin >> n >> m;
    while(n>0){
         b[i++]= n%2;
        n/=2;  
    }
    while(m>0){
         a[i++]= m%2;
        m/=2;   
    }
   for(int j=7;j>=0;j--){
       //v.push_back(b[j]);
       if(a[j] == b[j]){
           cnt++;
       }
   }
   cout << cnt;
   /*for(int x=7;x>=0;x--){
       q.push_back(a[x]);   
   }*/
   return 0;
}