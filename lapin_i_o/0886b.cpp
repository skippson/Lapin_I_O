#include<iostream>
#include<iterator>

#include<vector>
#include<algorithm>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(200001, -1);
    for(int i = 0; i < n; i++){
        int index;
        std::cin >> index;
        a[index] =  n - i - 1;
    } 
    std::cout << std::distance(a.begin(), std::max_element(a.begin(),a.end()));
    return 0;
}
