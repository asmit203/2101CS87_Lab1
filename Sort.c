#include <stdio.h>
void insertion_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void bubble_sort(int arr[], int n);
void merge_sort(int arr[], int n);
void quick_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);
int main()
{
    //taking input of the length of the array
    int n;
    printf("Enter number of element in the array: ");
    scanf("%d", &n);

    //taking the array input
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //before sorting
    printf("Before sorting array elements are --> \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //choosing algorithm for the sort
    printf("\nChoose the following option:\n1. Selection Sort\n2. Insertion Sort\n3. Bubble Sort\n4. Merge Sort\n5. Quick Sort\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        selection_sort(a, n);
        break;
    case 2:
        insertion_sort(a, n);
        break;
    case 3:
        bubble_sort(a, n);
        break;
    case 4:
        merge_sort(a, n);
        break;
    case 5:
        quick_sort(a, 0, n - 1);
        break;
    }

    //printing the sorted array
    printf("Sorted array is : \n");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//quick sortw
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that elements smaller than pivot are on left of pivot and elements greater than pivot are on right of pivot
        int pi = partition(arr, low, high);

        // recursive call on the left of pivot
        quick_sort(arr, low, pi - 1);

        // recursive call on the right of pivot
        quick_sort(arr, pi + 1, high);
    }
}

//partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&arr[i], &arr[j]);
        }
    }
    // swap the pivot element with the greater element at i
    swap(&arr[i + 1], &arr[high]);

    // return the partition point
    return (i + 1);
}


//insertion sort
void insertion_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}


//merge sort
void merge_sort(int arr[], int n)
{
    int i, j, k, m, temp[n];
    if (n > 1)
    {
        m = n / 2;
        merge_sort(arr, m);
        merge_sort(arr + m, n - m);
        for (i = 0, j = m, k = 0; k < n; k++)
        {
            if (j >= n)
                temp[k] = arr[i++];
            else if (i >= m)
                temp[k] = arr[j++];
            else if (arr[i] < arr[j])
                temp[k] = arr[i++];
            else
                temp[k] = arr[j++];
        }
        for (i = 0; i < n; i++)
            arr[i] = temp[i];
    }
}

//bubble sort
void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//selection sort
void selection_sort(int arr[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < (n - 1); i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
