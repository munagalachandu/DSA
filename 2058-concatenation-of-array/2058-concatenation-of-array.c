/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
  int* shuffled = (int*)malloc(2*numsSize * sizeof(int));
  int i;
  for(i=0;i<numsSize;i++)
  {shuffled[i]=nums[i];
  shuffled[i+numsSize]=nums[i];
  }   *returnSize=2*numsSize;
  return shuffled;
}