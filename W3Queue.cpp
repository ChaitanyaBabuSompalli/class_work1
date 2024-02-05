// C++ code to illustrate Queue in 
// Standard Template Library (STL)

#include <iostream>
// This allows the usage of functions like cout and cin for console I/O
#include <queue>

using namespace std;

// Function to display the elements of the queue
void showq(queue<int> gq)
{
    // Creating a copy of the queue to avoid modifying the original
    queue<int> g = gq;

    // Loop through the queue until it's empty
    while (!g.empty()) {
        // Display the front element of the queue
        cout << '\t' << g.front();

        // Remove the front element from the queue
        g.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    // Creating an empty queue named gquiz
    queue<int> gquiz;

    // Adding elements to the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Displaying the elements of the queue using the showq function
    cout << "The queue gquiz is : ";
    showq(gquiz);

    // Displaying the size, front, and back of the queue
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    // Removing an element from the front of the queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();

    // Displaying the modified queue after popping an element
    showq(gquiz);

    // Exiting the program
    return 0;
}
