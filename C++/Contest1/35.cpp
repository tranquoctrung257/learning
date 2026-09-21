#include <bits/stdc++.h>

using namespace std;

int main(){
    int h,m;cin >> h >> m;
    int minute = 1440 - (h*60 + m);
    cout << minute << endl;
}