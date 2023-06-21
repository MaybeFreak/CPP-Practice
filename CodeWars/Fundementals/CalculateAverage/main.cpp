// PASSED ALL TESTS

#include <iostream>
#include <vector>

using namespace std;

double calcAverage(const vector<int>& values) {
    if (values.size() == 0) return 0;
    double total{};
    for (auto value: values) {
        total += value;
    }
    return total / values.size();
}

int main() {
    cout << calcAverage({});
    return 0;
}