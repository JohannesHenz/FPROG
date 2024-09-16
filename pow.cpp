#include <cmath>
#include <iostream>

int to_the_power(const int base, const int exponent){
    return pow(base, exponent);
}

int main(){

int base = 0;
int ex = 0;

std::cin >> base;
std::cin >> ex;

std::cout << to_the_power(base, ex) << std::endl;

    return 0;
}