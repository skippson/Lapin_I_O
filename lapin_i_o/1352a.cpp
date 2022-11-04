#include <iostream>
 
int main() {
    int t = 0;
    std::cin >> t;
    for(int tt = 0; tt < t; tt++) {
        int n, f = 5, i = 0;
        std::cin >> n;
        int k = n;
        while (f != 0) {
            int m = n % 10;
            if (m != 0) {
                i++;
            }
        n /= 10;
        f--;
        }
        std::cout << i << std::endl;
        int n0 = k / 10000;
        int n1 = k % 10000 / 1000;
        int n2 = k % 1000 / 100;
        int n3 = k % 100 / 10;
        int n4 = k % 10;
        if (n0 != 0) { 
            std::cout << n0 * 10000 << " "; 
        } 
        if (n1 != 0) { 
            std::cout << n1 * 1000 << " "; 
        } 
        if (n2 != 0) { 
            std::cout << n2 * 100 << " "; 
        } 
        if (n3 != 0) { 
            std::cout << n3 * 10 << " "; 
        } 
        if (n4 != 0) { 
            std::cout << n4 << std::endl; 
        } 
    }   
    return 0;
}
