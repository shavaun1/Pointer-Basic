#include <iostream>
using namespace std;

int main() {
	
	int* ip1, * ip2;	//both ip1 and ip2 are pointers to int
	double dp, * dp2;	//dp2 is a pointer to double; dp is a double

	int ival = 42;
	int* p = &ival;		//p holds the address of ival ; p is a pointer to ival

	double dval;
	double *pd = &dval;		//ok; initializer is the address of a double 
	double *pd2 = pd;		//ok; initializer is a pointer to double
	//int* pi = pd;			//error: types of pi and pd differ
	//pi = &dval;			//error: assigning the address of a double to a pointer to int

	int ival = 42;			
	int *p = &ival;			//p holds the address of ival; p is a pointer to ival;
	cout << *p;				//* yeilds the objects to which p points; prints 42.

	*p = 0;					//* yield the objects; we assign a new value to ival through p
	cout << *p;				// print 0

	int *p1 = nullptr;		//equivalent to int *p1 = 0
	int *p2 = 0;			//directly initializes p2 from  the literal constant 0

	int zero = 0;
	//pi = 0;				//	error: cannot assign an int to a pointer

	int i = 42;
	int *pu = 0;			//*pu is initilized but addresses no object
	int *pk = &i;			// *pk initialized to hold the address of i
	int *pj;				//if *pj is define inside a block, *pj is uninitialized
	pj = pk;				//pj and pk addresses the same object, e.g., i
	pk = 0;					//pk addresses no object.

	pu = &ival;				//value in pu is change; pu now points to ival
	*pu = 0;				//value in ival is changed; pu is unchanged

	double obj = 3.14, *pd = &obj;
	//ok: void* can hold the address value of any data pointer type
	void *pv = &obj; //obj can be object of any type 
	pv = pd;		//pv can hold a pointer to any type

}