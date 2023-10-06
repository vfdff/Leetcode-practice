// 字典
//
typedef struct Trie {
  struct Trie *left;  // 0 左子树
  struct Trie *right; // 1 右子树
} Trie;

Trie *CreatTrie() {
  Trie *node = ...
  node->left = node->right = NULL;
  return node;
}

void Add(Trie *root, int num) {
   Trie cur = root;
   for (k = HIGH_BIT; k>=0; k--) {
     int bit = (num>>k) & 1;

     if (bit ==0) {
       if(!cur->left)
	  cur->left = CreatTrie();
       cur = cur->left;
     } else {
        if (!cur->right)
           cur->right = CreatTrie();
	cur = cur->right;
     }
   }
}

// 将两个子孩子看成 *child[2] 可以简化循环内if ... else 分支
