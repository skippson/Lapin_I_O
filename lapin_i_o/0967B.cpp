#include<iostream>
#include<queue>

int main(){
    int n, A, B, sum = 0, ans = 0;
    std::cin >> n >> A >> B;
    std::queue<int> q;
    std::priority_queue<int> p_q;
    for(int i = 0; i < n; i++){
        int s;
        std::cin >> s;
        sum += s;
        q.push(s);
    } 
    int first = q.front();
    q.pop();
    while(!q.empty()){
        p_q.push(q.front());
        q.pop();
    }
    while((first * A) / sum < B){
        ans++;
        sum -= p_q.top();
        p_q.pop();
    }
    std::cout << ans;
    return 0;
}
