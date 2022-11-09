#include <iostream>
#include <string>

int main(){
    int t;
    std::cin >> t;
    for(int tt = 0; tt < t; tt++){
        int g = 0;
        std::string s;
        std::cin >> s;
        if(s.size() < 2){
            std::cout << "NO" << std::endl;
        }
        else{
            for(int i = 1; i < s.size(); i++){
                if(s[i-1] != s[i] && s[i] != s[i+1]){
                    g = -1;
                    break;
                }
                else{
                    g = 1;
                }
            }
            if(g == -1){
                std::cout << "NO" << std::endl;
            }
            else if( g == 1){
                std::cout << "YES" << std::endl;
            }
        }
    }
    return 0;
}
