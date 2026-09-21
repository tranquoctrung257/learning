#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // n = 489648;
    int nam = n / 365;
    int tuan = (n % 365)/7; // hoặc có thể viết lại bằng T = (n - nam * 365) / 7
    int ngay = (n % 365) - (tuan * 7); // hoặc có thể viết là n - ( 365 * nam) - (7 * tuan)
    cout << nam << " " <<  tuan << " " << ngay << endl;
}