
#ifndef __LIST_NODE_H
#define __LIST_NODE_H

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

#endif
