#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int e = size - 1, s = 0;
    int mid = (s + (e - s)) / 2;
    while (s <= e)
    {
      //printf("%d",mid);
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key) {
            //left sub arr
            s = mid + 1;
        }
        if (arr[mid] > key) {
            //right sub arr
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int i, arr[50] = {0};
    printf("the arr is gone to 50 element insert.\n");
    for (i = 0; i <= 49; i++)
    {
        arr[i] = 10 + i;
    }
    printf("Now we are traverse element of arr\n");
    for (i = 0; i <=49; i++)
    {
        if (i % 10 == 0)
        {
            printf("\n");
        }
        printf("%d\t", arr[i]);
    }
    int key, size;
    printf("\nEnter the key that you want to find in arr\n");
    scanf("%d", &key);
    size = 50;
    printf("the size of arr is :\t%d", size);
    int index = binarySearch(arr, size, key);
    if (index == -1)
        printf("the value is not found\n");
    else
        printf("\nThe key %d is at %d th index in arr", key, index);
    return 0;
}