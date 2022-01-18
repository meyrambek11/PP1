#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[500500];

    for (int i=1;i<=n;++i){
        cin >> a[i];
    }
    for(int i=1;i<=n;++i){
        for(int p=1;p<=n;++p){
         if(a[i] >= a[p])
          swap(a[i],a[p]);
        }
    }
    for(int i=1;i<=n;++i)
     cout << a[i] << " ";
    return 0;
     
}
