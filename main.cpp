
#include <iostream>
#include "include/stack.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Stack s;
	cout << "Please enter numbers. Enter -1 to break the loop." << endl;
	while(true){
		int a;
		cout << ">>";
		cin >> a;
		if(a == -1){
			break;
		}
		s.push(a);
	}
	cout << "The size of stack: " << s.size() << endl;
	while(!s.isEmpty()){
		cout << s.pop() << " ";
	}
	return 0;
}