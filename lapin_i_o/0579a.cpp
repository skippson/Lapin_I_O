#include <iostream>

int main() {
    int x; 
    std::cin >> x;
    int i = 0;
    while (x != 0) {
        i += x & 1;
        x = x >> 1;
    }
    std::cout << i;
    return 0;
}
