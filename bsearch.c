// 二分查找
//
// bsearch 有现成函数
// 对有序的col个元素的升序数组 A[0, ..., col-1] 进行查找指定值Value

bool bsearch(int A[], int Value) {
  int Left = 0, Right = col - 1;
  while (Left < Right) {
    int mid = (Left + Right)/2;
    if (A[mid] == Value)
      return true;

    if (A[mid] < A[Right])
      Left = mid + 1;
    else
      Right = mid;
  }
  return false;
}

// Left 可行解, Right 初值可以稍微大一点，但是需要确保不溢出访存边界
// 二分法查找对于目标值只有一个时能比较准确的识别，但是如果不是一个，随机选中，eg: -1, -1, 1, 2 , ...
// while的条件 Left < Right, 则Left < mid = (Left + Right)/2 < Right




