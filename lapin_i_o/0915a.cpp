#include<iostream>
#include<vector>
 
int main(){
    int n, k, q = 10000;
    std::cin >> n >> k;
    std::vector <int> a(n);
    std::vector <int> b;
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(k % a[i] == 0){
            b.push_back(k / a[i]);
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] < q){
            q = b[i];
        }
 
    }
    std::cout << q;
    return 0;
}
