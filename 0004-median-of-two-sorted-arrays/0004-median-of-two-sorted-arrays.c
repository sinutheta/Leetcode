double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
    int n = nums1Size + nums2Size;
    int* arr = (int*)malloc(n * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] > nums2[j]) {
            arr[k] = nums2[j];
            k++;
            j++;
        } else {
            arr[k] = nums1[i];
            k++;
            i++;
        }
    }
    while (i < nums1Size) {
        arr[k] = nums1[i];
        k++;
        i++;
    }
    while (j < nums2Size) {
        arr[k] = nums2[j];
        k++;
        j++;
    }
    if (n % 2 == 0) {
        double sum = (arr[(n) / 2] + arr[(n / 2) - 1]) / 2.0;
        free(arr);
        return sum;
    }

    double sum = arr[(n - 1) / 2];
    free(arr);
    return sum;
}