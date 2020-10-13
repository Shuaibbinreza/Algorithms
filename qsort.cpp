#include<bits/stdc++.h>


using namespace std;


void quickSort(int arr[], int start, int endp)
{
    int pivot = arr[endp];

    if (start >= endp){
        return;
    }
    int se = (start - 1);

    int j = start;
    while(j <= endp - 1)
    {
        if (arr[j] < pivot)
        {
            se++;
            swap(arr[se], arr[j]);
        }
        j++;
    }
    swap(arr[se + 1], arr[endp]);
    pivot = (se + 1);

    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, endp);

}

int main()
{
    int i,j, arr[100], arr2[1000], N, swp;
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
