// PASSED ALL TESTS

#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseSeq(int n) {
    vector<int> seq{};
    for (n; n > 0; n--) {
        seq.push_back(n);
    }
    return seq;
}

int main() {
    cout << "Input a value: ";
    int value;
    cin >> value;

    vector<int> result = reverseSeq(value);
    for (auto num: result) cout << num << ", ";

    return 0;
}