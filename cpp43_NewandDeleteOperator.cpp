#include <iostream>
using namespace std;

int main()
{
  // Basic Example of Pointer
  int a = 4;
  int *ptr = &a;
  cout << "The value of a is " << *(ptr) << endl;
  cout << "The address pointer variable ptr hold is " << ptr << endl;
  cout << "The address reference veriable &a hold is " << &a << endl;

  //*************************"new" Operator************************
  /*"new" operator denotes a request for memory allocation and if sufficient memory is available a "new"
  operator initializes the memory and returns the address of the newly allocated and initialized memory
  to the pointer variable.
  */

  float *p = new float(40.78);
  cout << "The value at address p is " << *(p) << endl;
  /*float *p = new float(40.78); means "new" operator request for memory allocation to hold 40.78 and
    if sufficient memory is available "new" inializes the momory. And then returns the address of the
    newly allocated and initialized memory to the pointer variable means
  => p = address of the newly allocated memory.
  => *p = value present at address of the newly allocated memory = 40.78
  */

  //*************************"delete" Operator************************
  /*since it is programmer's responsibility to deallocate dynamically allocated memory we have "delete"
    operator to deallocated memory.
  */
  delete p;
  cout << "The value at address p after using delete operator is " << *(p) << endl;

  int *arr = new int[3];
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  cout << "The value of arr[0] is " << arr[0] << endl;
  cout << "The value of arr[1] is " << arr[1] << endl;
  cout << "The value of arr[2] is " << arr[2] << endl;

  delete[] arr;
  cout << "The value of arr[0] after using delete operator is " << arr[0] << endl;
  cout << "The value of arr[1] after using delete operator is " << arr[1] << endl;
  cout << "The value of arr[2] after using delete operator is " << arr[2] << endl;

  return 0;
}