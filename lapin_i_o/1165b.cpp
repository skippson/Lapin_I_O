#include<iostream>
#include<queue>

int main(){
    int n, temp = 1, pos = 1;
    std::cin >> n;
    std::queue <int> q;
    std::vector<int> a(n);
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    std::sort(a.begin(),a.end());
    for(int i = 0; i < a.size(); i++){
        q.push(a[i]);
    }
    q.pop();
    while(pos <= q.front() && !q.empty()){
        if(pos == q.front()){
            q.pop();
        }
        else if(pos <= q.front()){
            q.pop();
            temp++;
            pos++;
        }
    }
    std::cout << temp;
    return 0;
}
