
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int stars = (n / 2) + 1;
    int spaces = -1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= stars; j++) {
            cout << "*\t";
        }

        for (int j = 1; j <= spaces; j++) {
            cout << "\t";
        }

        int rightStars = stars;
        if (i == 1 || i == n) {
            rightStars = stars - 1;
        }
        
        for (int j = 1; j <= rightStars; j++) {
            cout << "*\t";
        }

        if (i <= n / 2) {
            stars--;
            spaces += 2;
        } else {
            stars++;
            spaces -= 2;
        }

        cout << endl;
    }

    return 0;
}