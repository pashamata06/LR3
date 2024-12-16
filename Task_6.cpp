#include <iostream>
#include <limits>
#include <cmath> 


double customSin(double x) {
    double term = x; 
    double sum = term; 
    int n = 1;

    while (fabs(term) > 1e-10) { 
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}


double customCos(double x) {
    double term = 1; 
    double sum = term; 
    int n = 1;

    while (fabs(term) > 1e-10) {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}


double customLn(double x) {
    if (x <= 0) return -std::numeric_limits<double>::infinity(); 
    double y = (x - 1) / (x + 1);
    double y2 = y * y;
    double term = y;
    double sum = term;
    int n = 1;

    while (fabs(term) > 1e-10) {
        term *= y2;
        sum += term / (2 * n + 1);
        n++;
    }
    return 2 * sum;
}

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

 
    double a = customSin(x);
    double b = customCos(x);
    double c = customLn(fabs(x));

   
    double minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;

    std::cout << "Минимальное значение: " << minVal << std::endl;

    return 0;
}
