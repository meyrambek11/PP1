#include <iostream>

using namespace std;

int main(){
    int m,n,sum=0;
    cin >> m >> n;
    int a[m][n];
    int r[m],l[n];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;++i){
        r[i]=0;
        for(int j=0;j<n;++j)
        r[i] = r[i] + a[i][j];
    }
    for(int j=0;j<n;++j){
        l[j]=0;
        for(int i=0;i<m;++i)
        l[j]=l[j] + a[i][j];
    }
    for(int i=0;i<m;++i){
            cout << "The sum of row number "<<" "<< i+1<<" "<< "is "<<" " << r[i];
            cout << endl;
    }
    for(int j=0;j<n;++j){
        cout <<"The sum of column number"<<" " <<j+1<< " " << "is" <<" " << l[j];
        cout << endl;
       
    }   
   
   return 0;
}
