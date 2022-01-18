#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int AB1 = abs(x2 - x1), AB2 = abs(y2 - y1);
    int BC1 = abs(x3 - x2), BC2 = abs(y3 - y2);
    int AC1 = abs(x3 - x1), AC2 = abs(y3 - y1);
    double AB = sqrt(AB1*AB1 + AB2*AB2);
    double BC = sqrt(BC1*BC1 + BC2*BC2);
    double AC = sqrt(AC1*AC1 + AC2*AC2);
    if(AB > abs(BC-AC) && AB < (BC + AC) && BC > abs(AB - AC) && BC < (AB + AC) && AC > abs(AB - BC) && AC < (AB + BC)){
        double p = (AB + AC + BC)/2;
        double S = sqrt(p*(p - AB)*(p - BC)*(p - AC));
        cout << S << endl;
    }
    else
    cout << "Mundai ushburish bolui mumkin emes" << endl;
    return 0;
}