#include <iostream>
 
int main() {
    int n = 0, k = 0, max = -10000000000, max_m= -10000000000;
    std::cin >> n;
    std::cin >> k;
    while (n > 0) {
        int f = 0, t = 0;
        std::cin >> f;
        std::cin >> t;
        if (t >= k) {
            max = f - (t - k);
        }
        else {
            max = f;
        }
        if (max_m < max) {
            max_m = max;
        }
        else {
            max = max_m;
        }
        n--;
    }
    std::cout << max_m;
    return 0;
}
