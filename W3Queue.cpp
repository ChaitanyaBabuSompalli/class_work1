// C++ code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
// This allows the usage of functions like cout and cin for console I/O
#include <queue>

using namespace std;

// Function to display the elements of the queue
void showq(queue<int> gq)
{
    // Create a copy of the queue to avoid modifying the original queue
    queue<int> g = gq;

    // Iterate through the elements of the queue until it becomes empty
    while (!g.empty()) {
        // Print the front element of the queue
        cout << '\t' << g.front();

        // Remove the front element from the queue
        g.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    // Declare a queue of integers
    queue<int> gquiz;

    // Push elements into the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Display the elements of the queue
    cout << "The queue gquiz is : ";
    showq(gquiz);

    // Display the size of the queue
    cout << "\ngquiz.size() : " << gquiz.size();

    // Display the front element of the queue
    cout << "\ngquiz.front() : " << gquiz.front();

    // Display the back element of the queue
    cout << "\ngquiz.back() : " << gquiz.back();

    // Remove an element from the front of the queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();

    // Display the elements of the modified queue
    showq(gquiz);

    return 0;
}
