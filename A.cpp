#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c, d, sum, my, pos;
    pos=1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;
        if (i == 1)
            my = sum;
        else {
            if (sum > my)
                pos++;
        }
    }
    cout << pos << endl;
}