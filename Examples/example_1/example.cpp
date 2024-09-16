#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

int main (int argc, char *argv[]) {
    int a = 2;
    int b = 3;
    int c = 4;
    
    auto quader = [](int a) {
        return [a](int b) {
            return [a, b](int c) {
                int V = a * b * c;
                int A = 2 * (a * b + a * c + b * c);
                float d = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
                return make_tuple(V, A, d);
            };
        };
    };

    auto [V, A, d] = quader(a)(b)(c);
    cout << "Volumen: " << V << " Oberfläche: " << A << " Diagonale: " << d << endl;
    return 0;
}
