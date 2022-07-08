#include <iostream>

int jump(int sd, int a, int count){
    if (sd == 1){
        return 1;
    }
    if (sd == 2) {
        return 2;
    }
    if (sd == 3) {
        return 4;
    }
    if (count == sd) {
        return a;
    }
    return jump(sd, a * 2, count += 1);
}

int main() {
    int n, start_fib = 7, j = 4;
    std::cout << "Enter number\n";
    std::cin >> n;
    std::cout << jump(n, start_fib, j);

}