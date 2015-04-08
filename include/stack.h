#ifndef CLS_STACK
#define CLS_STACK

class Stack{
public:
	Stack();
	~Stack();
	void push(int num);
	int pop();
	bool isEmpty();
	int size();
private:
	int *data;
	int s_capacity;
	int s_size;
	void expand();
	void shrink();
};

#endif