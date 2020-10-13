#include <bits/stdc++.h>

using namespace std;


void MERGE(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int size1 = mid - left + 1;
    int size2 = right - mid;

    int L[size1], R[size2];

    for (i = 0; i < size1; i++){
        L[i] = arr[left + i];
    }

    for (j = 0; j < size2; j++){
        R[j] = arr[mid + 1 + j];
    }


    i = 0;
    j = 0;
    k = left;
    while (i < size1 && j < size2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < size2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int left, int right)
{
    if (left >= right){
        return;
    }
    if (left < right) {

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        MERGE(arr, left, mid, right);
    }
}


int main()
{
    int arr[100], N;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, N-1);

    printf("\nSorted array is \n");
    for (int i = 0; i < N; i++){
        cout << arr[i] << " " << endl;
    }
    return 0;
}
