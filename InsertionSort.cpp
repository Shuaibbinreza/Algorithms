#include<bits/stdc++.h>


using namespace std;

int main()
{
    int i,j, arr[100], N, swp;
    cin >> N;
    for (i = 0; i < N; i++){
        cin >> arr[i];
    }
    int pos;
    for (i = 1; i < N; i++)
    {
        pos = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > pos)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = pos;
        //cout << arr[i] << endl;
    }

    for (i = 0; i < N; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
