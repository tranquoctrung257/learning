#include <iostream>


int main(){
    // bài này sẽ bằng số bước bên phải nhân với a - số bước bên trái nhân với b
    long long a,b,k; std::cin >> a >> b >> k;
    if(k%2 == 1){
        std::cout << (k/2 + 1)*a - (k/2)*b << std::endl;
    }
    else std::cout << (k/2)*a - (k/2)*b << std::endl;
}