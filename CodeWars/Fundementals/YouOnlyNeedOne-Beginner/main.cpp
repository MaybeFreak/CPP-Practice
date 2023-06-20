// PASSED ALL TESTS

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check(const vector<string>& seq, const string& elem) {
    for(auto letter: seq) if(letter == elem) return true;
    return false;
}

int main() {
    cout << check({ "a", "b", "c" }, "a");
    return 0;
}