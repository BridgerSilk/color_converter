#include <iostream>
#include <tuple>

using namespace std;

std::tuple<double, double, double, double> rgb_to_cmyk(double r, double g, double b) {
    double c, m, y, k;
    
    r /= 255, g /= 255, b /= 255;
    
    c = (g + b) / 2;
    m = (r + b) / 2;
    y = (r + g) / 2;
    k = 0;
    c *= 100, m *= 100, y *= 100, k *= 100;
    
    return {c, m, y, k};
}

int main() {
    double r, g, b;

    cin >> r >> g >> b;
    auto [c, m, y, k] = rgb_to_cmyk(r, g, b);
    cout << c << " " << m << " " << y << " " << k;
}