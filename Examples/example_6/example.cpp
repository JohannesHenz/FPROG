#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

int main (int argc, char *argv[]) {
    int a = 2;

    auto dodekaeder = [](int a) {
        float V = pow(a, 3) * (15 + 7 * sqrt(5)) / 4.0;
        float A = 3 * pow(a, 2) * sqrt(5 * (5 + 2 * sqrt(5)));
        float ru = a * sqrt(3) * (1 + sqrt(5)) / 4.0;
        float ri = a * sqrt(10 * (25 + 11 * sqrt(5))) / 20.0;
        return make_tuple(V, A, ru, ri);
    };

    auto [V, A, ru, ri] = dodekaeder(a);
    cout << "Volumen: " << V << " Oberfläche: " << A 
         << " Inkreisradius: " << ri << " Umkreisradius: " << ru << endl;

    return 0;
}
