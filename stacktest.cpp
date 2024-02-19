#include <iostream>
#include <vector>
#include "stack.h"

using namespace std;

int main() {
  Stack<int> stack;
  stack.push(3);
  cout << stack.top() << endl;
  stack.pop();
  stack.pop();
}