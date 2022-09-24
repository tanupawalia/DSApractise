class Solution {
public:
    
    int length(ListNode* head){
        int i=0;
        while(head!=NULL){
            head=head->next;
            i++;
        }
        return i;
    }
    ListNode* middleNode(ListNode* head) {
        int len=length(head);
        if(head==NULL){
            return NULL;
        }
        int mid= len/2;
        int i=0;
        while(head!=NULL &&i<mid){
            head=head->next;
            i++;
        }
    return head;
    }
};
