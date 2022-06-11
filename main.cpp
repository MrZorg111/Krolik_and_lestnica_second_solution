#include <iostream>

int jump (int& dp, int n = 1, int k = 1) {
    int sol = 1, count = 0;
    sol += n + k;
    n = k;
    k = sol;
    count++;
    if (count == dp) {
        n = 1;
        k = 1;
        count = 0;
    }
    jump(n, k );
}


int main() {
    int n;
    std::cout << "Enter number:" << std::endl;
    std::cin >> n;
    return jump(n);
}
