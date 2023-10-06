// hash
//
typedef struct {
  int id; // key
  int count;
  UT_hash_handle hh;
} hash;

void hashAdd(hash **pT, int id) {
  hash *node = malloc ();
  node->id = id;
  HASH_ADD_INT (*pT, id, node);
}

void hashDel (hash **pT, hash *node) {
  HASH_DEL(*pT, node);
}

hash *Find(hash **pT, int id) {
   hash *node;
   HASH_FIND_INT(*pT, &id, node);
   return node;  // node == NULL 则代表不存在相应的元素
}

HASH_ITER(hh, g_user, node, tmp) 

// 注意
// HASH_FIND_STR 中的第二个参数char *即对应字符串的接口
// HASH_SORT(*pT, cmp)
