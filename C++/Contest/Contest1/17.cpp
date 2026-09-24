#include <bits/stdc++.h>

using namespace std;
int main(){
    double d1,d2,d3,d4;
    cin >> d1 >> d2 >> d3 >> d4;
    double DTB = (d1 + d2 + d3*2 + d4*3) / 7;
    if (DTB >= 8) cout << "GIOI" << endl;
    else if(DTB >= 6.5 && DTB < 8) cout << "KHA" << endl;
    else if(DTB >= 5 && DTB < 6.5) cout << "TRUNG BINH" << endl;
    else cout << "YEU" << endl;
}