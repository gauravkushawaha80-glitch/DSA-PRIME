#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalRows = 2 * n + 1;
    int mid = n + 1;

    for (int r = 1; r <= totalRows; r++) {

        int level = abs(mid - r);

        // number logic (IMPORTANT FIX)
        int val = (n + 1) - (level + 1);
        if (val < 1) val = 1;

        // left spaces
        for (int s = 0; s < level; s++)
            cout << " ";

        // first number
        cout << val;

        // middle spaces
        int innerSpaces = 2 * (n - level) - 1;
        if (innerSpaces >= 1) {
            for (int s = 0; s < innerSpaces; s++)
                cout << " ";
            cout << val;
        }

        cout << endl;
    }

    return 0;
}
