void pop(struct node **head) {
	if((*head) == NULL)
		return;
	struct node * temp = (*head);
	(*head) = (*head)->next;
	free (temp);
	return;
}