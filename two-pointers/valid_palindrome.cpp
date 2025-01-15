#include <cctype>
#include <string>
#include <cassert>

using std::string;

bool isPalindrome(string s) {
  int i = 0;
  int j = s.size() - 1;
  while (i <= j) {
    if (!isalnum(s[i]))
      i++;
    else if (!isalnum(s[j]))
      j--;
    else {
      if (tolower(s[i]) != tolower(s[j])) {
        return false;
      }
      i++;
      j--;
    }
  }
  return true;
}

int main() {
  bool result = isPalindrome("A man, a plan, a canal: Panama");
  assert(result == true);
  result = isPalindrome("race a car");
  assert(result == false);
  return 0;
}
