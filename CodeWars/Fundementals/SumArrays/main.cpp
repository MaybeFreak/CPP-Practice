// PASSES ALL TESTS

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int sum(vector<int> nums) {
    return reduce(nums.begin(), nums.end());
}

int main() {
    cout << sum({});
    return 0;
}
