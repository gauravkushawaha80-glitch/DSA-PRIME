#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0, pro = 0, digit;

    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0) {
            sum = sum + digit;   // even digit sum
        } else {
            pro = pro + digit;   // odd digit sum
        }

        n = n / 10;
    }

    cout << sum << endl;
    cout  << pro << endl;

    return 0;
}