#include<bits/stdc++.h>

using namespace std;

void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main()
{
    int num, arr[10000];
    cin >> num;
    for (int i = 0; i < num; i++){
        scanf("%d", &arr[i]);

    }

    return 0;
}
