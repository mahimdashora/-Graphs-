// C++ program to illustrate
// array of vectors



//N number of nodes and storing 2E ,where E is for edges .
// Space complexity :  (N+2E)
#include <iostream>
#include <vector>
using namespace std;

// Declaring array of vectors
// globally
vector<int> v[5];

// Function for inserting elements
// in array of vectors
void insertionInArrayOfVectors()
{

	for (int i = 0; i < 5; i++) {

		// Inserting elements at every
		// row i using push_back()
		// function in vector
		for (int j = i + 1; j < 5; j++) {
			v[i].push_back(j);
		}
	}
}

// Function to print elements in array
// of vectors
void printElements()
{

	// Traversing of vectors v to print
	// elements stored in it
	for (int i = 0; i < 5; i++) {

		cout << "Elements at index "
			<< i << ": ";

		// Displaying element at each column,
		// begin() is the starting iterator,
		// end() is the ending iterator
		for(int k=0;k<v[i].size();k++)
        {
           cout<<v[i][k]<<" ";
        }
		
		cout << endl;
	}
}

// Function to illustrate array
// of vectors
void arrayOfVectors()
{
	// Inserting elements in array
	// of vectors
	insertionInArrayOfVectors();

	// Print elements stored in array
	// of vectors
	printElements();
}

// Driver code
int main()
{
	arrayOfVectors();
	return 0;
}
