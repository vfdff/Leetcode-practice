// 双向队列 (单调队) 239
//

int *maxSlidingWindow(int *A, int size, int K, int *returnSize) {
  int q[size];
  int Left = 0, Right = 0;
  for (int i=0; i<K; i++) {
    while (Left<Right && A[i] >= A[q[Right-1]]) {
	    Right--;
    }  
    q[Right++] = i; // 维持单调减，记录下标
  }
  *returnSize = 0;
  int * ans = malloc(sizeof(int) * (size - K + 1));
  ans[*(retunSize)++] = A[q[Left]]; // 单调减的做元素最大

  for (int i=k; i<size; i++) {
    while (Left < Right && A[i] >= A[q[right-1]]) {
      Right--;
    }
    q[Right++] = i;
    while (q[Left] <= i-K) { // 单调，确保在滑动窗口内
      Left++;
    }
    ans[*(returnSize)++] = A[q[Left]];
  }
  return ans;
}  


// 典型的单调栈
//

int foo (int A[], int n) {
  int stack[n];
  int top = 0;
  for (int i=0; i<n; i++) {
    while(top > 0 && A[i] > A[Top-1]) { // 确保栈顶大于新加入元素，即保证单调减
      value = Stack[--top];  // 获取栈顶元素
      -- ans
    }

    Stack[top++] = A[i];
  }
}

