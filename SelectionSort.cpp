#include<bits/stdc++.h>


using namespace std;

void selection (int arr[], int N)
{
    int swp;
    for (int i = 0; i < N-1; i++){
        int minval = i;
        for (int j = i+1; j < N; j++){
            if (arr[j] < arr[minval]){
                minval = j;
            }

        }
        if (minval != i){
            swp = arr[minval];
            arr[minval] = arr[i];
            arr[i] = swp;
        }

    }

    for (int i = 0; i < N; i++){
        cout << arr[i] << endl;
    }

}

int main()
{
    int i,j, arr[100], N;
    cin >> N;
    for (i = 0; i < N; i++){
        cin >> arr[i];
    }

    selection(arr, N);
    return 0;
}

