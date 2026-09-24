#include <iostream>

using namespace std;

int main(){
    char c;cin >> c;
    if(c >= 'A' && c <= 'Z'){
        cout << (char)(c+32) << endl;
    }
    else if(c >= 'a' && c <= 'z'){
        cout << (char)(c-32) << endl;
    }
    else cout << c << endl;
}