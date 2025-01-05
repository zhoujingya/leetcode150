#include <stack>
#include <string>

using std::stack;
using std::string;

bool isValid(string s) {
  stack<char> stack;
  for (auto &ch : s) {
    if (ch == '(' || ch == '[' || ch == '{')
      stack.push(ch);
    else if (stack.empty())
      return false;
    else if (ch == ')') {
      if (stack.top() != '(')
        return false;
      stack.pop();
    } else if (ch == ']') {
      if (stack.top() != '[')
        return false;
      stack.pop();
    } else if (ch == '}') {
      if (stack.top() != '{')
        return false;
      stack.pop();
    }
  }
  return stack.empty();
}
