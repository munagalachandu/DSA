void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i;
    for(i=0;i<n;i++)
    { nums1[m+i]=nums2[i];
    }
    int j;
    int t=0;
    for(i=0;i<m+n-1;i++)
    { for(j=0;j<m+n-1-i;j++)
    {if(nums1[j]>nums1[j+1])
    {t=nums1[j];
    nums1[j]=nums1[j+1];
    nums1[j+1]=t;}}}
}