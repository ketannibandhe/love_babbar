// // C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Macro definition
// #define AREA(l, b) (l * b)

// // Driver Code
// int main()
// {
// 	// Given lengths l1 and l2
// 	int l1 = 10, l2 = 5, area;

// 	// Find the area using macros
// 	area = AREA(l1, l2);

// 	// Print the area
// 	cout << "Area of rectangle"
// 		<< " is: "<<
// 		area;

// 	return 0;
// }


// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

// Driver Code
int main()
{

	// Given two number a and b
	int a = 18;
	int b = 76;

	cout << "Minimum value between"
		<< a << " and " << b 
		<< " is: " << min(a, b);

	return 0;
}
