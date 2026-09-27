#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int a,b;cin >> a >> b;
    // số nhỏ hơn hoặc bằng a chia hết cho b
    cout << a/b*b << endl;
    
    // số nhỏ nhất hớn hơn a chia hết cho b
    if(a % b == 0) cout << a  << endl;
    else cout << (a/b+1) * b << endl;;

    // hoặc có thể dùng công thức  
    cout << (a+b-1)/b*b;


}