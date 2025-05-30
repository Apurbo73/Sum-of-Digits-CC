#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        int sum = 0;
        int rem = 0;
        while (a > 0) {

            rem = a % 10;
            sum = sum + rem;
            a = a / 10;
        }
        cout << sum << endl;
    }
}