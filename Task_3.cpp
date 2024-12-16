#include <iostream>
#include <cmath>

int main() {
    double A = 0;
    double B = M_PI / 2;
    int M = 20;
    double H = (B - A) / M;

    for (int i = 0; i <= M; i++) {
        double x = A + i * H;
        double y = std::sin(x) - std::cos(x);
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
    return 0;
}