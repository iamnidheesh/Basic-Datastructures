int findLen(struct node * head) {

	static int i = 0;
	if(head == NULL) {
		return i;
	}
	i += 1;
	return findLen(head->next);
}