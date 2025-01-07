// You are given an integer array coins representing coins of different
// denominations and an integer amount representing a total amount of money.
// Return the fewest number of coins that you need to make up that amount. If
// that amount of money cannot be made up by any combination of the coins,
// return -1.
// You may assume that you have an infinite number of each kind of coin.
#include <cmath>
#include <vector>

using std::min;
using std::vector;

int coinChange(vector<int> &coins, int amount) {
  vector<int> dp(amount + 1, amount + 1);
  dp[0] = 0;
  for (auto &coin : coins)
    for (int j = coin; j <= amount; ++j)
      dp[j] = min(dp[j], dp[j - coin] + 1);
  return dp[amount] > amount ? -1 : dp[amount];
}
