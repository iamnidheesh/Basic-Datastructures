void printList(struct node * curr) {
	if(curr == NULL)
		return;
	printf("%d -> ",curr->data);
	printList(curr->next);
}