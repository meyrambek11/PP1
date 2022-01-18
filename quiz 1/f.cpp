#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    int a[n];
for (int i=0;i<n;i++){
    cin >> a[i];
}
for(int i=0;i<n;i++){
     sort(a,a+n);
     }

for(int i=0;i<n;i++){
if(a[i-1] == a[i]){
        m = a[i];
    }
}
cout << m;

return 0;
}