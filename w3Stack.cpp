#include <iostream>     //Include the input/output stream library for using cout.
#include <stack>        //Include the stack library for using the stack data structure.
using namespace std;    //Use the standard namespace to simplify code
int main()              //The main function where the execution of the program begins.
{
	stack <int> stack; //Declare a stack of integers named 'stack'.
	stack.push(21);    // Push the value 21 onto the stack.
	stack.push(22);    // Push the value 22 onto the stack.
	stack.push(23);    // Push the value 23 onto the stack.
	stack.push(24);    // Push the value 24 onto the stack.
	stack.push(25);    // Push the value 25 onto the stack.
	int num = 0;       //Declare an integer variable 'num' and initialize it with the value 0.
	stack.push(num);   //Push the value of 'num' (0) onto the stack.
	stack.pop();       //Pop (remove) the top element from the stack
	stack.pop();       //Pop (remove) the top element from the stack
	stack.pop();       //Pop (remove) the top element from the stack
	while (!stack.empty()) // Loop until the stack is empty.
	{
		cout << stack.top() << " ";//Print the top element of the stack followed by a space.
		stack.pop();     //Pop (remove) the top element from the stack.

	}
	return 0;                     //Indicate successful execution of the program.
}
