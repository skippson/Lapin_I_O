#include<iostream>

int main(){
    int t;
    std::cin >> t;
    for(int tt = 0; tt < t; tt++){
        int n, rost = 1, prov = 0, z = 1;
        std::cin >> n;
        for(int i = 0; i < n; i++){
            int a;
            std::cin >> a;
            if(a == 1){
                if(prov == 1){
                    rost += 5;
                }
                else{
                    rost++;
                }
                prov = 1;
            }
            else if(a == 0){
                if(prov == -1){
                    z = 0;
                }
                else{
                    rost += 0;
                }
                prov = -1;
            }
    
         }
        if(z == 0){
            std::cout << -1 << std::endl;
        }
        else{
            std::cout << rost << std::endl;
        }
    }
    return 0;
}
