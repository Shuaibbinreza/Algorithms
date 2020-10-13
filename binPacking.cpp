#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[100], N;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int capacity;
    cin >> capacity;

    int res = 0, bin = capacity;

    for (int i = 0; i < N; i++) {

        if (arr[i] > bin) {
            res++;
            bin = capacity - arr[i];
        }
        else
            bin = bin - arr[i];
    }

    cout << res;
    return 0;
}
