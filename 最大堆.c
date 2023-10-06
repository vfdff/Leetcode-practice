// 最大堆 1845
//
// index 范围 [0, ..., len -1], 即:
// 0
// 1  2       --> Parent = (index-1)/2
// 3  4  5  6
struct pair {};
struct MaxHeap {
  int len;
  int buf;
} HEAP;

HEAP *Create() {
  HEAP *obj = (HEAP*)malloc(sizeof (HEAP)* 1);
  obj->len = 0;
}

void swap(HEAP *obj, int a, int b);

// 最大堆：obj->buf[0] 最大值
void push(HEAP *obj, struct pair Val) {
  int index = obj->len++;
  obj->buf[index] = Val; // 暂时放到最后

  while (index > 0) {
    int Parent = (index-1)/2;
    if (obj->buf[Parent] < obj->buf[index]) {
      swap(obj, Parent, index);
    } else break;

    index = Parent;
  }
}

int bigger(HEAP *obj, int a, int b)

struct pop(HEAP *obj) {
  struct pair Val = obj->buf[0];
  obj->buf[0] = obj->buf[--obj->len]; // 将末尾的暂存到0号位置

  int index = 0;
  while (index < obj->len/2) {
    int tmp = bigger(obj, 2*index+1, 2*index + 2);
    if (obj->buf[tmp] > obj->buf[index]) {
       swap (obj, tmp, index);
    }

    index = tmp;
  }
}
