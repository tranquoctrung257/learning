#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//cách này không sai nhưng bài này quy định là số vòng lặp lên tới 10^10 nên bài này ko chạy kịp thời gian
//vòng lặp chỉ chạy trong 10^8 
//int main(){
//    ll n;cin >> n;
//    ll tonguoc = 0;
//    for(int i = 1; i<= n; i++){
//        if(n % i ==0){
//            tonguoc += i;
//        }
//    }
//    cout << tonguoc << endl;
//}

// 10^10 ==> 10^5

int main(){
	ll n;cin >> n;
    ll tonguoc = 0;
    for(int i = 1; i <= sqrt(n);i++){
    	if(n % i ==0){
    		tonguoc += i;
    		if(n % i != i ) tonguoc += n/i;
		}
	}
	cout << tonguoc << endl;
}