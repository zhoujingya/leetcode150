#include <vector>

using std::vector;

extern vector<vector<int>> threeSum(vector<int> &nums);

int main() {
  vector<int> ts = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> res = threeSum(ts);
  return 0;
}
