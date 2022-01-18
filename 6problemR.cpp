#include <iostream>
using namespace std;
void f(char s){
    if(s>='a' && s<='z'){
        s=s-32;
        cout << s;
    }
    else{
    cout << s;}
}
int main (){
    char s;
    cin >> s;
    f(s);
    return 0;

}