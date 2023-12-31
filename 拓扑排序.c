// 拓扑排序，可以解决2类问题
// 1. 排序  2. 是否有环
//

// 初始化, 维护入度为0
for (int i=0;i<n; i++) {
  if (iv[i] == 0)
     stack[top++] = i;
}

while (top > 0) {
  ....
  int v = stack[top-1]; top--;
  // 遍历边，pop 一个入度为0的元素时，其相连接的元素入度减1
  for (int i=0; i<n; i++) {
    if (graph[v][i] != 1)
      continue;  // 确保存在连接
    iv[i]--;     // 入度更新
    if(iv[i] == 0) {  // 入度为0，即代表叶子结点
      stack[top++] = i; 
    }
  }
}

// 注意：结束时top = 0, 但仍旧还有一些元素没有完成排序，则代表有环
//       对于队列中入库为0的元素，顺序是随机的，因此不是稳定的排序
