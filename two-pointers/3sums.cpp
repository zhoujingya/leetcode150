#include <vector>

using std::vector;

vector<vector<int>> threeSum(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  vector<vector<int>> res;
  for (int i = 0; i < nums.size(); i++) {
    if (i > 0 && nums[i] == nums[i - 1]) {
      continue;
    }
    int j = i + 1;
    int k = nums.size() - 1;
    while (j < k) {
      if (nums[j] + nums[k] > -nums[i])
        k--;
      else if (nums[j] + nums[k] < -nums[i])
        j++;
      else {
        res.push_back({nums[i], nums[j], nums[k]});
        while (nums[j + 1] == nums[j] && j + 1 < k) {
          j++;
        }
        j++;
        while (nums[k - 1] == nums[k] && k - 1 > j) {
          k--;
        }
        k--;
      }
    }
  }
  return res;
}
