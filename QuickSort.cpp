#include<bits/stdc++.h>

using namespace std;

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int se = (low - 1);

    int j = low;
    while(j <= high - 1)
    {
        if (arr[j] < pivot)
        {
            se++;
            swap(arr[se], arr[j]);
        }
        j++;
    }
    swap(arr[se + 1], arr[high]);
    return (se + 1);
}

void quickSort(int arr[], int start, int endp)
{
    if (start >= endp){
        return;
    }

    int pivot = partition (arr, start, endp);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, endp);

}

int main()
{
    int i,j, arr[100], N, swp;
    cin >> N;
    for (i = 0; i < N; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, N);
    for (i = 0; i < N; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
