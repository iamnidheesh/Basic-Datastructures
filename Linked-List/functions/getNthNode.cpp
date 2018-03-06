int getNthNode(struct node * head,int n) {
	static int i = 0;
	
	if(head == NULL) {
		return -1;
	}
	i++;
	if(i == n)
		return head->data;
	return getNthNode(head->next,n);

}