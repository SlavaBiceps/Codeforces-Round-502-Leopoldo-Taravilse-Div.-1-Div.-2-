#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> ans;

int main() {
    int i, j, k;
    cin >> n;
    j = sqrt(n);
    for (i = 1; i <= n; i += j) {
        for (k = min(i + j - 1, n); k >= i; k--) {
            ans.push_back(k);
        }
    }
    for (i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}