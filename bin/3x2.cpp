#include <bits/stdc++.h>
using namespace std;

#define DEBUG

int N, sol, takei;
vector <int> pieces;

bool mysort(int a, int b) {
    return a > b;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin >> N;
    pieces.resize(N);
    sol = 0;
    takei = 0;

    for (size_t i = 0; i < N; ++i)
        cin >> pieces[i];

    sort(pieces.begin(), pieces.end(), mysort);

    for (size_t i = 0; i < N; ++i) {
        if (takei != 2)
            sol += pieces[i];
        takei = (takei + 1) % 3;
    }

    cout << sol << endl;
}
