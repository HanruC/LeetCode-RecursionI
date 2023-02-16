#include<stdio.h>
// This one creates a new temp list to store.
//Memory is kind of large. 
typedef struct ListNode {
    int val;
    struct ListNode* next;
}ls;

ls* mergeTwoList(ls* list1, ls* list2) {
    ls temp;
    ls* tail = &temp;
    temp.next = NULL;
    
    while(list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1 == NULL) {
        tail->next = list2;
    } else {
        tail->next = list1;
    }
    
    return temp.next;
}
