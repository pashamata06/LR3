#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int sum = 0;
    int temp = num;
    int digits = static_cast<int>(std::log10(num) + 1);

    while (temp > 0) {
        int digit = temp % 10;
        sum += std::pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int limit;
    std::cout << "Введите число: ";
    std::cin >> limit;

    std::cout << "Числа Армстронга меньше " << limit << ":" << std::endl;
    for (int i = 1; i < limit; i++) {
        if (isArmstrong(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}