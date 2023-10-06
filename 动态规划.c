// 动态规划
//
// 1. 零钱
// { F(i) = min(F(i-cj) + 1), i 代表金额
// { 
//
dp[0] = 0;
for (int i=1; i<= count; i++) {
  // 有coin.size()种不同币值的硬币
  for (int j=0; j<coin.size(); j++)
    if (coin[j] < i) 
       dp[i] = fmin(dp[i], dp[i-coin[j]]) + 1;	    
}


// dp[i][count] 前i件物品，容量为j的最优解
