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
