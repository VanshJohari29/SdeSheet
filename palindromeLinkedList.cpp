class Solution {
public:
    
      ListNode* Prev ;
    bool helper(ListNode* head )
    {
        if(head==NULL ) return true ;
        if(!helper(head->next)) return false;
        bool isTrue =   head->val== Prev->val;
        Prev =  Prev->next;
        return isTrue;
    }
    
    bool isPalindrome(ListNode* head)
    {
        ListNode* temp= head;
        Prev =  head;
        return helper(head );
    }   
    
};
