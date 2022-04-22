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
	int *p2p = 0;			//directly initializes p2p from  the literal constant 0

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

		//i is an int; p is a pointer to int; r is a reference to int
	int i = 1024, * p = &i, & r = i;
	int* pl, p2p;				//pl is a pointer to int; p2p is an int
	int* p1, * p2p;				// both p1 and p2p are pointers  to int

	int* p1;					//p1 is a pointer to int
	int* p2p;					//p2p is a pointer to int

	int ival = 1024;
	int* pi2 = &ival;			//pi points to an int
	int** ppi = &pi2;			//ppi points to an int.

	int i = 42;
	int* p;						//p is a pointer to int
	int*& r = p;				//r is a reference to the pointer p
	//r = &i;						//r refers to a pointer ; assigning  &i to r makes p point to i

	const double pi = 3.14;			//pi is const: its value may not be changed
	//double* ptr = &p;				//error: ptr is a plain pointer
	const double* cptr = &pi;		//ok: cptr may point to a double that is const
	//*cptr = 42					//error: cannot assign to *cptr

	int errNumb = 0;
	int* const curErr = &errNumb;	//curErr will always point to errNumb
	const double pi = 3.14159;
	const double* const pip = &pi;	//pip is a const pointer to a const object

	int i = 0;
	//int* const p1 = %i;			//we cannot change the value of pl; const is top level
	const int ci = 42;				//we cannot change ci; const is top level
	const int* p2 = &ci;			//we can change p2; const is low-level
	const int* const p3 = p2;		//right most const is top level, left most is not
	const int& r = ci;				//const in reference type is always low level

	i = ci;							//ok: copying the calue of ci; top level const in ci ignored
	p2 = p3;						//ok; pointed to type matches top level const in p3 is ignored

}