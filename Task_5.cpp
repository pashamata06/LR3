#include <iostream>
#include <cmath>

double f(double x) {
    return exp(x) - 2;
}

int main() {
    int parts;
    std::cout << "Введите количество частей для области поиска корня: ";
    std::cin >> parts;

    double a = 0, b = 1, step = (b - a) / parts;
    double minAbsValue = fabs(f(a));
    double root = a;

    for (double x = a; x <= b; x += step) {
        double value = fabs(f(x));
        if (value < minAbsValue) {
            minAbsValue = value;
            root = x;
        }
    }

    std::cout << "Приближённый корень: " << root << std::endl;
    return 0;
}