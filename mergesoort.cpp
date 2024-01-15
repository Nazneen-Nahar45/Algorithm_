#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int l, int mid, int r) {

  // Create L ← arr[l..mid] and M ← arr[mid+1..r]
  int n1 = mid - l + 1;
  int n2 = r - mid;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[mid + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = l;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at arr[l..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in arr[l..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // mid is the point where the array is divided into two subarrays
    int mid = (l + r ) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, mid, r);
  }
}

// Print the array



int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
