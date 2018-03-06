#include <bits/stdc++.h>
using namespace std;
struct node {
	int data;
	struct node * next;
};
void printList(struct node * curr) {
	if(curr == NULL)
		return;
	printf("%d -> ",curr->data);
	printList(curr->next);
}
void push(struct node ** head, int x) {

	struct node * curr = new struct node() ;
	curr->data = x;
	curr->next = NULL;

	if(*head == NULL) {
		*head = curr;
		return;
	}

	struct node * temp = *head;
	*head = curr;
	(*head)->next = temp;
	return;
}
void pop(struct node **head) {
	if((*head) == NULL)
		return;
	struct node * temp = (*head);
	(*head) = (*head)->next;
	free (temp);
	return;
}
int main() {

	struct node *start = NULL;
	push(&start,1);
	push(&start,2);
	push(&start,3);
	push(&start,4);
	printList(start);
	pop(&start);
	printf("\n");
	printList(start);
}