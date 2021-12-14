#include <iostream>
using namespace std;
void merge(int *array, int l, int m, int r)
{
    int i, j, k, nl, nr;
    //size of left and right sub-arrays
    nl = m - l + 1;
    nr = r - m;
    int larr[nl], rarr[nr];
    //fill left and right sub-arrays
    for (i = 0; i < nl; i++)
        larr[i] = array[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    //marge temp arrays to real array
    while (i < nl && j < nr)
    {
        if (larr[i] <= rarr[j])
        {
            array[k] = larr[i];
            i++;
        }
        else
        {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < nl)
    { //extra element in left array
        array[k] = larr[i];
        i++;
        k++;
    }
    while (j < nr)
    { //extra element in right array
        array[k] = rarr[j];
        j++;
        k++;
    }
}

void mergesort(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; //create an array with given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1); //(n-1) for last index
    cout << "Array after Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}