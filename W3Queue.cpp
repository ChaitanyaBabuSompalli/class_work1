#include <iostream>           //To use cout, include the input/output stream library.
#include <queue>              //To use the queue data structure, include the queue library.

using namespace std;          //To make code simpler, use the standard namespace 


void showq(queue<int> gq)      //Create a function called "showq" that accepts an integer queue as a parameter.

{

	queue<int> g = gq;     //Make a replica of the input queue 'gq' named 'g'.
	while (!g.empty())      //Loop until the queue 'g' is empty.
	{
		cout << '\t' << g.front();  //Print the front element of the queue with a tab character.
		g.pop();        //Remove the front element from the queue.
	}

	cout << '\n';                    //Print a newline character after printing all elements.

}



// The main function where the execution of the program begins.
int main()
{

	queue<int> gquiz;         //Declare the 'gquiz' integer queue.

	gquiz.push(10);           //Push the value 10 to the back of the queue.

	gquiz.push(20);            //Push the value 20 to the back of the queue.

	gquiz.push(30);            //Push the value 30 to the back of the queue.

	cout << "The queue gquiz is : ";     //Print a message indicating the queue is being displayed

	showq(gquiz);               //To see the queue's contents, use the'showq' function.



	cout << "\ngquiz.size() : " << gquiz.size();   //Use the'size' member function to print the queue's size.

	cout << "\ngquiz.front() : " << gquiz.front();  //Print the front element of the queue using 'front' member function.

	cout << "\ngquiz.back() : " << gquiz.back();    //Print the back element of the queue using 'back' member function.



	cout << "\ngquiz.pop() : ";         //Print a message to indicate that an element has been removed from the queue.

	gquiz.pop();                        //Remove the front element from the queue.

	showq(gquiz);                       //Call the 'showq' function to display the updated elements of the queue.
	return 0;                           // Indicate successful execution of the program.

}
