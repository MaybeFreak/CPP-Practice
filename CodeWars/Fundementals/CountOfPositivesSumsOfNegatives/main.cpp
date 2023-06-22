// PASSSES ALL TESTS

#include <iostream>
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
    if (input.size() == 0) return input;
    int positives{};
    int negatives{};
    for(auto num: input) {
        if (num != 0) num < 0 ? negatives += num : positives++;
    }
    return {positives, negatives};
}

int main() {
    std::vector<int> result = countPositivesSumNegatives({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15});
    return 0;
}