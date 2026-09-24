// Bài 5. hàm sqrt và cbrt

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << fixed << setprecision(2) << sqrt(n) << endl;
    cout << fixed << setprecision(3) << cbrt(n) << endl;
}