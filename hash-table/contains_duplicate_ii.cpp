
#include <unordered_map>
#include <vector>

using std::unordered_map;
using std::vector;

bool containsNearbyDuplicate(vector<int> &nums, int k) {
  unordered_map<int, int> tmp;
  for (size_t i = 0; i < nums.size(); i++) {
    if (tmp.find(nums[i]) == tmp.end())
      tmp[nums[i]] = i;
    else {
      if (i - tmp[nums[i]] <= k)
        return true;
      else
        tmp[nums[i]] = i;
    }
  }
  return false;
}
