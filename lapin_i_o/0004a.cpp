#include <iostream>
 
int main() {
    int i;
    std::cin >> i;
    if (i % 2 == 0 && 2 < i) {
        std::cout << "YES";
    }
    else { 
        std::cout << "NO";
    }
  return 0;
}
