// 约瑟夫 n 个人 围一圈，第m个人退出

int Josephus (int n, int m) {
  int f = 0;
  for (i=2; i!=n+1; i++)
    f = (f+m)%i;
  return f;
}
