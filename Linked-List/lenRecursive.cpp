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
int findLen(struct node * head) {

	static int i = 0;
	if(head == NULL) {
		return i;
	}
	i += 1;
	return findLen(head->next);
}
int main() {

	struct node *start = NULL;
	push(&start,1);
	push(&start,2);
	push(&start,3);
	push(&start,4);
	printList(start);
	printf("\n");
	cout<<findLen(start)<<endl;
}