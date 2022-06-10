// Here we are using Tortoise Hare approach 
//Create two pointers slow and fast and initialize them to a head pointer.
//we increment slow ptr by 1 and fast ptr by 2, so if take a close look fast ptr will travel double than that of the slow pointer. 
//So when the fast ptr will be at the end of Linked List, slow ptr would have covered half of Linked List till then.
//So slow ptr will be pointing towards the middle of Linked List.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
		ListNode* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
    }
};
