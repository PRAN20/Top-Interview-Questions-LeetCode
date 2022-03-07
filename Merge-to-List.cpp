class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=nullptr, *c1=list1, *c2=list2, *p;
        if(c1!=nullptr && c2!=nullptr){
            if(c1->val<=c2->val){
                head=c1;
                p=c1;
                c1=c1->next;
                p->next=nullptr;
            }else{
                head=c2;
                p=c2;
                c2=c2->next;
                p->next=nullptr;
            }
        }
        else if(c1!=nullptr){
            
                return c1;
        }
        else{
                return c2;
            
        }
        while(c1!=nullptr && c2!=nullptr){
            if(c1->val<=c2->val){
                p->next=c1;
                p=c1;
                c1=c1->next;
                p->next=nullptr;
            }
            else{
                p->next=c2;
                p=c2;
                c2=c2->next;
                p->next=nullptr;
            }
        }
        if(c1!=nullptr){
            p->next=c1;
        }
        else{
            p->next=c2;
        }
        return head;
    }
}; 
