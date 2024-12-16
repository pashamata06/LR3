#include <iostream>
#include <cmath>

int main() {
    int N = 0;
    int i = 1;
    while (i <= 30) {
        int a_i = (i % 2 == 0) ? (i / 2) : i;
        int b_i = (i % 2 == 0) ? std::pow(i, 3) : std::pow(i, 2);
        N += std::pow(a_i - b_i, 2);
        i++;
    }
    std::cout << "Сумма N = " << N << std::endl;
    return 0;
}