#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

int main (int argc, char *argv[]) {
    int a = 2;

    auto oktaeder = [](int a) {
        float V = pow(a, 3) * sqrt(2) / 3;
        float A = 2 * pow(a, 2) * sqrt(3);
        float ru = a * sqrt(2) / 2;
        float ri = a * sqrt(6) / 6;
        return make_tuple(V, A, ru, ri);
    };

    auto [V, A, ru, ri] = oktaeder(a);
    cout << "Volumen: " << V << " Oberfläche: " << A 
         << " Inkreisradius: " << ri << " Umkreisradius: " << ru << endl;

    return 0;
}
