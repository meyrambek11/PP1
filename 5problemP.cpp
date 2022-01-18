#include <iostream>

using namespace std;

int main(){
    string c;
    cin >> c;
    for(int i=0;i<c.size();++i){
        if(c[i] == 122){
            c[i]=c[i] - 25;
        }   
        else if(c[i]>='a' && c[i]<='z'){
            c[i] = c[i] + 1;      
        }
        
}
for(int i=0;i<c.size();++i)
cout << c[i]; 

return 0;
}