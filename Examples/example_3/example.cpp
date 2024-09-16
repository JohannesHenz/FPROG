#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

int main (int argc, char *argv[]) {
    int a = 2;

    auto tetraeder = [](int a) {
        float V = pow(a, 3) * sqrt(2) / 12;
        float A = pow(a, 2) * sqrt(3);
        float ru = a * sqrt(6) / 4;
        float ri = a * sqrt(6) / 12;
        return make_tuple(V, A, ru, ri);
    };

    auto [V, A, ru, ri] = tetraeder(a);
    cout << "Volumen: " << V << " Oberfläche: " << A 
         << " Inkreisradius: " << ri << " Umkreisradius: " << ru << endl;

    return 0;
}
