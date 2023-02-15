/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode)); // set a temp node before the first head. 
    temp->next = head; //set as the temp head. 
    struct ListNode *prev = temp; // pointing the temp. 
    while(head != NULL && head->next != NULL) {
        prev->next = head->next; // prev is set as the prev nodes before the first node. 
        head->next = prev->next->next; 
        prev->next->next = head; 
        prev = head; 
        head = head->next; 
    }
    return temp->next; 
}
// [1,2,3,4] -> [2,1,4,3].
//【Null, 1, 2, 3, 4, NULL]
