struct ListNode* insertionSortList(struct ListNode* head){
    struct ListNode *sorted, *prev, *ins_ptr, *next;
    if(head==NULL || head->next==NULL) return head;
	bool flag;
    ins_ptr = head->next; 
    head->next = NULL; 

    while (ins_ptr!=NULL) {
        sorted = head; 
        prev = head;
        next = ins_ptr->next; 

        flag=true;
        while(sorted!=NULL && sorted->val <= ins_ptr->val){
            prev = sorted; 
            sorted = sorted->next;
            flag=false;
        }
        	if (sorted!=NULL){
        	(flag) ? (head=ins_ptr) : (prev->next=ins_ptr); 
			ins_ptr->next = sorted; 
        	}
        	else{ 
            ins_ptr->next = NULL;  
            prev->next = ins_ptr;
        }
        ins_ptr = next; 
    }
    return head;
}
