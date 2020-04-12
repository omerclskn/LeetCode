struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int i, size=1;
    struct ListNode *index=head;
    
    if(index->next==NULL && n==1) return NULL;
    
    while(index->next!=NULL){
        size++;
        index=index->next;
    }
    index=head;
    if(size==n) return head->next;
    for(i=0;i<(size-n-1);i++){
        index=index->next;
    }
    index->next=index->next->next;
    return head;
}
