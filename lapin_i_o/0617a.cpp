
 #include <iostream>
 
int main() {
    int s;
    std::cin >> s;
    int n = s / 5;
    if (s % 5 != 0){
    n += 1;   
    }
    std::cout << n;
return 0;
}
