#include <bits/stdc++.h>
using namespace std;
#define NOT_ON_STACK -10000000
struct Stack {
	int top;
	int capacity;
	int *array;
};
struct Stack createStack(struct Stack s,int capacity) {
	s.top  = -1;
	s.capacity = capacity;
	s.array = (int*)malloc(capacity * sizeof(int));
	return s;

}
bool isFull(struct Stack *s) {
	if(s->top == s->capacity - 1)
		return true;
	else
		return false;
}
void push(struct Stack *s,int item) {
	if(isFull(s))
		return;
	s->top += 1;
	s->array[s->top] = item;
	cout<<item <<" pushed on the Stack\n";
}
bool isEmpty(struct Stack s) {
	if(s.top == -1)
		return true;
	else
		return false;
}
int pop(struct Stack *s) {
	if(!isEmpty(*s)) { // empty takes struct stack
		return s->array[s->top--];
	}
	else {
		return NOT_ON_STACK; // NOT_ON_STACK = -10000000
	}
}
int top(struct Stack s) {
	if(!isEmpty(s)){
		return s.array[s.top];
	}
	else
		return NOT_ON_STACK;
}
int main() {
	struct Stack s;
	s = createStack(s,100); 
	push(&s,10); 
	push(&s,20);
	push(&s,30);
	cout<<"popped item = "<<pop(&s)<<endl;
	cout<<"top is "<<top(s)<<endl;
}