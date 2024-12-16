#include <iostream>
#include <cmath>

double computeSeries(double x, int n) {
    double sum = 1.0;  // Начальное значение для ряда (1-й член)
    double term = 1.0; // Первый член ряда
    for (int i = 1; i < n; ++i) {
        term *= x / i; // Вычисляем i-й член ряда
        sum += term;   // Добавляем член к сумме
    }
    return sum;
}

int main() {
    int n, count;
    std::cout << "Введите количество членов ряда: ";
    std::cin >> n;
    std::cout << "Введите количество значений x: ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        double x;
        std::cout << "Введите значение x (от 0.1 до 1): ";
        std::cin >> x;
        
        double seriesResult = computeSeries(x, n);
        double exactResult = exp(x);

        std::cout << "Результат ряда: " << seriesResult << std::endl;
        std::cout << "Точное значение: " << exactResult << std::endl;
    }

    return 0;
}