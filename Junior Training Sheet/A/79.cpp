#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while (n--) {
        string s;
        cin >> s;
        sort(all(s));
        for (int i = 0; i <= k; i++) {
            bool valid = binary_search(all(s), i + '0');
            if (!valid) break;
            if (i == k) cnt++;
        }
    }
    cout << cnt;

    return 0;
}