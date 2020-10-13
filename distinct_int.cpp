#include<bits/stdc++.h>
#include <iostream>

using namespace std;

// You are given N integers. Find the numbers of distinct integers among them.

int main()
{
    set <int> my_set; /// Item sorted order a thake;

    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(30);
    my_set.insert(30);
    my_set.insert(20);
    my_set.insert(10);
    my_set.insert(20);

    for (auto val : my_set)
        cout << val << " ";


    ///cout << my_set.size() << endl;

    return 0;
}
