#include <stdio.h>

void print_result(int a[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    printf("%d ", a[i]);
    printf("\n");
}

void    merge(int arr[], int l, int middle, int r)
{
    int i,j,k;
    int n1 = middle-l+1;
    int n2 = r-middle;
    int left[n1], right[n2];

    for (i = 0; i < n1; i++)
    {
        left[i] = arr[l+i];
    }
    for (j = 0; j < n2; j++)
    {
        right[j] = arr[middle+1+j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i<n1 && j<n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void    merge_Sort(int arr[], int left, int right)
{
    if (left < right)
    {
        // int middle = left+(right-1)/2;
        int middle = (left+right)/2;

        merge_Sort(arr, left, middle);
        merge_Sort(arr, middle+1, right);

        merge(arr, left, middle, right);
    }
}

int main()
{
    int arr[] = {85, 24, 63, 45, 17, 31, 96, 50};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    print_result(arr, arr_size);

    merge_Sort(arr, 0, arr_size - 1);
     
    printf("\nSorted array is \n");
    print_result(arr, arr_size);
}
