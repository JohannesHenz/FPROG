#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Implement the prodWithFunctionalLoops function
int prodWithFunctionalLoops(const vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 1, [](int a, int b) {
        return a * b;
    });
}

int main() {
    vector<int> numbers1 = {1, 2, 3, 4, 5, 6, 7, 8};
    // Calculate and print the product of the vector
    int prod1 = prodWithFunctionalLoops(numbers1);
    cout << "Product of the vector is " << prod1 << endl;

    vector<int> numbers2 = {2, 4, 6, 8};
    // Calculate and print the product of the vector
    int prod2 = prodWithFunctionalLoops(numbers2);
    cout << "Product of the vector is " << prod2 << endl;

    vector<int> numbers3 = {8, 3, 1};
    // Calculate and print the product of the vector
    int prod3 = prodWithFunctionalLoops(numbers3);
    cout << "Product of the vector is " << prod3 << endl;

    return 0;
}
