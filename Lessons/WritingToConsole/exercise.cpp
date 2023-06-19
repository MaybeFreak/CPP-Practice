#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    double taxStateRate = 0.04;
    double taxCountyRate = 0.02;

    double taxStateValue = sales * taxStateRate;
    double taxCountyValue = sales * taxCountyRate;
    double totalTaxValue = taxCountyValue + taxCountyValue;

    cout << "Total Sales = " << sales << endl
         << "State Tax = " << taxStateValue << endl
         << "County Tax = " << taxCountyValue << endl
         << "Tax total = " << totalTaxValue << endl
         << "Total after tax = " << sales - totalTaxValue << endl;

    return 0;
}