#include<bits/stdc++.h>


using namespace std;

void bs(int arr[], int N)
{
    int i,j, swp;
    for (i = 0; i < N-1; i++){

        for (j = 0; j < N-i-1; j++){
            if (arr[j] > arr[j+1]){
                swp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swp;
            }
        }

    }
    for (i = 0; i < N; i++){
        cout << arr[i] << endl;
    }
}

int main()
{
    int i,j, arr[100], N, swp;
    cin >> N;
    for (i = 0; i < N; i++){
        cin >> arr[i];
    }

    bs(arr, N);

    return 0;
}
