#include <iostream>

using namespace std;

int main(){
    int n,m,mini,x,y;
    int sum = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;++i){
         for(int j=0;j<m;++j)
        cin >> a[i][j];
    }
   cout << "coordinates of min elements:";
   cout << endl;
   for(int j=0;j<m;++j){
       mini = a[0][j];
       x=1;
       y=j+1;
       for(int i=0;i<n;++i){
           if(a[i][j]<mini){
               mini = a[i][j];
               x=i+1;
               y=j+1;
           }
       }
       sum = sum + mini;
       cout << x <<";" << y << endl;     
       
    }
    cout << endl;
    cout <<"Their sum:" << endl;
    cout << sum;
       
    
    return 0;

}