#include <iostream>

using namespace std;

int main(){
    int n,s;
    cin >> n;
    bool a[n];
    for(int i=2;i<=n;++i){
        a[i] = true;
    }
    for(int i=2;i<=n;++i){
        if(a[i]==true){
            int m=i;
            while(m+i<=n){
                m=m+i;
                a[m]=false;
            }
        }
    }
    for(int i=2;i<=n;++i){
       if(a[i]==true){
           s=i;
           cout << s <<" " <<"is prime"<< endl;
       }
    }
   
    
    return 0;

}