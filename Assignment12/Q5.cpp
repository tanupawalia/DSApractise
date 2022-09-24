SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
 
    SinglyLinkedListNode *n= new SinglyLinkedListNode(data);
    SinglyLinkedListNode *prev=NULL,*temp=llist;
    for(int i=0; i<=position;i++){
        if(i==position){
            prev->next=n;
            n->next=temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    } 
    return llist;
}
