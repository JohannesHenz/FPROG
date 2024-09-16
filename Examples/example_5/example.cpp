#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

int main (int argc, char *argv[]) {
    int a = 2;

    auto ikosaeder = [](int a) {
        float V = 5 * pow(a, 3) * (3 + sqrt(5)) / 12;
        float A = 5 * pow(a, 2) * sqrt(3);
        float ru = a / 4.0 * sqrt(2 * (5 + sqrt(5)));
        float ri = a * sqrt(3) * (3 + sqrt(5)) / 12;
        return make_tuple(V, A, ru, ri);
    };

    auto [V, A, ru, ri] = ikosaeder(a);
    cout << "Volumen: " << V << " Oberfläche: " << A 
         << " Inkreisradius: " << ri << " Umkreisradius: " << ru << endl;

    return 0;
}
