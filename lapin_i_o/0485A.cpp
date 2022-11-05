#include<iostream>
 
int main(){
    int a, m, i = 1;            
    std::cin >> a >> m;
    while(a < 10e6){
        a += a % m;
        if(a % m == 0){
            i = 0;
            break;
        }
    }
    if(i == 1){
        std::cout << "No";
    }
    else {
        std::cout << "Yes";
    }
    return 0;
}
