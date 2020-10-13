#include <bits/stdc++.h>
using namespace std;



int main()
{
    int COINS[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = 9;
    vector<int> counts;

    int num;
    cin >> num;
    sort(COINS, COINS + n);
    int i = n - 1;
    while(i >= 0){
        while (num >= COINS[i]){
            num = num - COINS[i];
            counts.push_back(COINS[i]);
        }
        i--;
    }

    cout << counts.size() << "\n";
    return 0;
}
