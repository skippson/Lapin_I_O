#include<iostream>
#include<queue>
 
 
int main(){
    int n, temp = 0, max_a = 0;
    long long k;
    std::cin >> n >> k;
    std::queue <int> q;
    for(int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        if(a > max_a){
            max_a = a;
        }
        q.push(a);
    }
    int c = q.front();
    if(c == max_a){
        std::cout << c;
    }
    else {
        while(temp != k){
            q.pop();
            if(c > q.front()){
                temp++;
                q.push(q.front());
            }
            else{
                temp = 1;
                q.push(c);
                c = q.front();
                if(c == max_a){
                    break;
                }
            }
        }
        std::cout << c;
    }
    return 0;
}
