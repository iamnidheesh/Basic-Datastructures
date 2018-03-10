#include <iostream>
#include <stack>
using namespace std;
int main() {
	// initialise
	stack <int> s;
	
	// push
	s.push(10);
	s.push(20);
	s.push(30);
	
	// pop and top
	cout<<"top is "<<s.top()<<endl;
	s.pop();
	cout<<"now top is "<<s.top()<<endl;
	
	// empty
	if(s.empty())
		cout<<"stack is empty"<<endl;
	else
		cout<<"stack is not empty"<<endl;

	// dynamic allocation , capacity is not needed


}