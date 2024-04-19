#include <iostream>

using namespace std;

double computeSequenceTerm(int n) {
    if (n == 1) {
        return 10;
    }
    else {
        return 5 / computeSequenceTerm(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    double term = computeSequenceTerm(n);
    cout << "n member of the series: " << term << endl;

    return 0;
}
