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

    Stack[top++] = A[i];  // 入栈新元素值 <= 栈顶元素值，即单调减
  }
}

