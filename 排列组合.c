// 排列
//
void Backtrace(int A[], int index) {
  if (index == n)
    return;

  for (i=0; i<n;i++) {
    if (visit[i])
      continue;
    // A[i]==A[i-1] 去重, 即避免新的A[i] 和A[i-1]是一样的(虽然未访问），此时假设A是有序的
    if (i>0 && A[i]==A[i-1] && !visit[i-1])
      continue;
     
    Record[index] = A[i];

    visit[i] = 1;
    Backtrace(A, index+1);
    visit[i] = 0;
  }
}


// 组合
//
void dfs (int m, int n) {
  if (m == n+1)
     return;

}








// 直接调用库函数
#include<iostream> 
#include<algorithm>
using namespace std;
char str[4] ={'1','2','2','4'};
 
int main() {
	do{
		printf("%s\n",str);
	} while(next_permutation(str,str+4));
	return 0;
}
