class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         ListNode *smallhead, *largehead;
        smallhead = new ListNode(-1);
        largehead = new ListNode(-1);
        
        ListNode *cur = head;
        ListNode *smallcur = smallhead, *largecur = largehead;
        
        while(cur){
            if(cur->val < x){
                smallcur->next = cur;
                smallcur = smallcur->next;
            }else{
                largecur->next = cur;
                largecur = largecur->next;
            }
            cur = cur->next;
        }
        
        largecur->next = nullptr;
        smallcur->next = largehead->next;
        
        return smallhead->next;
    }
};
