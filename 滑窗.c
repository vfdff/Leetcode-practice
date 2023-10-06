// 滑窗
//
// 找到连续的不大于S个元素的最长子串长度
int FindMax(int A[], int S) {
  int Left = 0, Right = 0;
  int Sum = 0;
  int Max = 0;
  while (Right < End) {  // 确保索引不越界
     Sum += A[Right];

     while (Sum >= S) {
       Left++;
     }
     // 获取一个符合要求的合法子串, L==R时长度为1
     Max = fmax(Max, Right-Left+1);
     
     Right++;
  }
  return Max;
}

