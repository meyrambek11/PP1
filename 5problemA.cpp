#include <iostream>

using namespace std;

int main(){
    string c;
    int sum=0,cnt=0;
    cin >> c;
    for(int i=0;i<c.size();++i){
        if(c[i] >= 'A' && c[i]<= 'Z'){
            sum = sum +1;
            
        }
        if(c[i]>='a' && c[i]<='z'){
            cnt = cnt+1;   
        }
    
    
}
cout << cnt << " "<< sum;

return 0;
}