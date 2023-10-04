#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long k;
        cin >> n >> k;

        vector<long> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int s = 0, l = 0;
        for (int i = 1; i < n; i++) {
            if (A[i] - A[i - 1] > k) {
                l = max(l, i - s);
                s = i;
            }
        }

        cout << n - max(l, n - s) << '\n';
    }

    return 0;
}
