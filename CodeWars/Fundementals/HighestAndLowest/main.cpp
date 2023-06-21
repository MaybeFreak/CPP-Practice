// PASSES ALL TESTS

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string highAndLow(const string& numbers) {
    istringstream input(numbers);
    string output;
    vector<int> nums;
    while (getline(input, output, ' ')) {
        nums.push_back(stoi(output));
    }

    int highest = nums.at(0);
    int lowest = nums.at(0);
    for (auto num: nums) num > highest ? highest = num : num < lowest ? lowest = num : 0;
    return to_string(highest) + " " + to_string(lowest);
}

int main() {
    cout << highAndLow("1 2 3 4 5");
    return 0;
}