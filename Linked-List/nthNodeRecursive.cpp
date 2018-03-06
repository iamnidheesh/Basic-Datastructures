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
int main() {

	struct node *start = NULL;
	push(&start,1);
	push(&start,2);
	push(&start,3);
	push(&start,4);
	printList(start);
	printf("\n");
	int x = getNthNode(start,2);
	if(x == -1)
		printf("n greater than length\n");
	else
		printf("%d\n",x);
}