#include <iostream>
#include "heap.h"
#include <functional>

using namespace std;

int main() {
  std::less<int> comparator;
  Heap<int> heap(3);
	heap.push(0);
	heap.push(5);
	heap.push(10);
	heap.push(15);
	heap.push(20);

	cout << heap.top() << endl;
	heap.pop();
	cout << heap.top() << endl;
	heap.pop();
	cout << heap.top() << endl;
	heap.pop();
  cout << heap.top() << endl;
	heap.pop();
	cout << heap.top() << endl;
}