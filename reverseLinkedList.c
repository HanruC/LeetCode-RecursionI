#include <stdio.h>

struct ListNode {
      int val;
      struct ListNode *next;
 };

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* following = head;
    while(curr != NULL) {
        following = following->next;
        curr->next = prev; // change the 指针方向.
        prev = curr;
        curr = following;
    }
    return prev;
}

