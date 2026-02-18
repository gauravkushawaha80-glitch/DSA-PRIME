#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int evenPlaceSum = 0, oddPlaceSum = 0;
    int place = 1;   // unit place = 1 (odd)

    cin >> n;

    if (n < 0)
        n = -n;

    while (n > 0) {
        digit = n % 10;

        if (place % 2 == 0) {
            evenPlaceSum += digit;
        } else {
            oddPlaceSum += digit;
        }

        n /= 10;
        place++;
    }
    cout << oddPlaceSum << endl;
    cout << evenPlaceSum << endl;

    return 0;
}