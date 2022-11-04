#include <iostream>
 
int main() {
    int i, s1, s2, s3, s4;
    std::cin >> i;
    for (i++; i <= 9100; i++) {
        s1 = i % 10;
        s2 = (i / 10) % 10;
        s3 = (i /100) % 10;
        s4 = (i / 1000) % 10;
        if (s1 != s2 and s1 != s3 and s1 != s4 and s2 != s3 and s2 != s4 and s3 != s4) {
            std::cout << i;
            break;
            }
        }           
    return 0;    
}
