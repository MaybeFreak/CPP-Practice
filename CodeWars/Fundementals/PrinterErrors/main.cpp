#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string checkErrors(string s) {
    vector<int> v(s.begin(), s.end());
    int errors{};
    for(int letter: v) {
        if (letter > 109) errors++;
    }
    return to_string(errors) + "/" + to_string(v.size());
}

string betterSolution(string s) {
    int numOfErrors = count_if(
        s.cbegin(), s.cend(),
        [](char c) { return c > 'm'; }
    );
    return to_string(numOfErrors) + "/" + to_string(s.length());
}

int main() {
    cout << betterSolution("aaabbbbhxzaijjjm");
    cout << endl;
    cout << checkErrors("aaabbbbhxzaijjjm");
    return 0;
}