// 并查集
//
int Find(int *Parent, int index) {
  while (Parent[index] != index)
	  index = Parent[index];
  return Parent[index];
}

// 合并, i2 的Parent为合并后新的Parent
// P1 --> P2
// ^      ^
// |      |
// i1     i2
void Union(int *Parent, int i1, int i2) {
  Parent[Find(Parent, i1)] = Find(Parent, i2);
}

// 注意初始化时的有效值 Parent[i] = i;
