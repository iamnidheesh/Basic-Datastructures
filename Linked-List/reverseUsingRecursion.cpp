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
void reverse(struct node * curr , struct node * prev , struct node ** head) {

	if(curr->next == NULL) {
		// make the last node as head
		*head = curr;
		(*head)->next = prev;
		return;
	}
	// store next for next recursive call
	struct node *next = curr->next;
	// update the next of current node
	curr->next = prev;
	reverse(next,curr,head);
}
int main() {

	struct node *start = NULL;
	push(&start,1);
	push(&start,2);
	push(&start,3);
	push(&start,4);
	printList(start);
	printf("\n");
	reverse(start,NULL,&start);
	printList(start);
}