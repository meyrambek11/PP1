#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n];
for(int k=0;k<n;k++){
    cin>>a[k];
}
int m=a[0];
    for(int k=0;k<n;k++){
        if(a[k]>m){
            m=k-1;
        }
    }

    
    cout << m <<endl;
    return 0;

}