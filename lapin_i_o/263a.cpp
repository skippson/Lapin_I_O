#include <iostream>
 
int main() {
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int temp = 0;
            std::cin >> temp;
            if (temp == 1) {
                x = i;
                y = j;
            }
        }
    }
    std::cout << abs(x - 2) + abs(y - 2);
    return 0;
}
