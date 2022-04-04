ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode *first;
        ListNode *p=head;
        
        while(--k) p=p->next;           
        
        first=p;
        ListNode *second=head;
        while(p->next)
        {
            p=p->next;
            second=second->next;
        }
        swap(first->val,second->val);
        return head;
        
    }
