This library will simplify the work on the input of various types of variables.
=======

Using with a string variable
-----
```cpp
#include <iostream>
#include <string>
#include "input.h"

int main() {
  std::string name = input("What is your name: ");
  std::cout << "Your name: " << name << std::endl;
}
```

Using with a int variable
-----
```cpp
#include <iostream>
#include "input.h"

int main() {
  int i = stoi(input("How many your old: ")) + 6;
  std::cout << i << std::endl;
}
```
