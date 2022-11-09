#include<iostream>
#include<vector>

#include<queue>

int main(){
    int n, exs = 4, pos = 1;
    std::cin >> n;
    std::vector<int> a(n);
    std::priority_queue<int> q;
    for(int i = 0; i < n; i++){
        int ex, sum = 0;
        for(int j = 0; j < exs; j++){
            std::cin >> ex;
            sum += ex;
        }
        a[i] = sum;
        q.push(a[i]);
    }
    while(a[0] != q.top()){
        q.pop();
        pos++;
    }
    std::cout << pos;
    
    return 0;
}
