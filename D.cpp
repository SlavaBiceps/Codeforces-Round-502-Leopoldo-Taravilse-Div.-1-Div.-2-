#include<bits/stdc++.h>

using namespace std;

int main() {
    int w[13];
    int mas[10002], tw[10002];
    int res[10002][102];
    string s, t;
    int num, n, m, q, x, k;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 1; j <= n; j++) {
            if ((i >> (n - j) & 1) == 0) {
                tw[i] += w[j];
            }
        }
    }
    while (m--) {
        cin >> s;
        num = 0;
        for (int i = 0; i < n; i++) {
            num = num * 2 + s[i] - '0';
        }
        mas[num]++;
    }
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < (1 << n); j++) {
            x = tw[i ^ j];
            if (x <= 100)res[i][x] += mas[j];
        }
        for (int j = 1; j <= 100; j++)
            res[i][j] += res[i][j - 1];
    }
    while (q--) {
        cin >> t >> k;
        for (int i = 0; i < n; i++) {
            num = num * 2 + t[i] - '0';
        }
        cout << res[num][k] << " ";
    }
    return 0;
}