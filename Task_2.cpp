#include <iostream>
#include <cmath>

int main() {
    double sum = 0.0;
    double epsilon = 0.001;
    int n = 1;
    double d_n;

    do {
        d_n = 1.0 / std::pow(2, n) + 1.0 / std::pow(3, n);
        sum += d_n;
        n++;
    } while (d_n >= epsilon);

    std::cout << "Сумма ряда = " << sum << std::endl;
    return 0;
}