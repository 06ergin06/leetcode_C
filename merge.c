void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
    int lastIndex1 = m - 1;
    int lastIndex2 = n - 1;
    int mergeIndex = m + n - 1;
    while (lastIndex2 >= 0) {
        if (lastIndex1 >= 0 && nums1[lastIndex1] > nums2[lastIndex2]) {
            nums1[mergeIndex] = nums1[lastIndex1];
            lastIndex1--;
        } else {
            nums1[mergeIndex] = nums2[lastIndex2];
            lastIndex2--;
        }
        mergeIndex--;
    }
}