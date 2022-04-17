Статическая библиотека, которая упрощает ввод данных
=======

Используем библиотеку, чтоб получить ваше имя в STRING
-----
```cpp
#include <iostream>
#include <string>
#include <input.h>

int main() {
  std::string name = input("What is your name: ");
  std::cout << "Your name: " << name << std::endl;
}
```

Используем библиотеку, чтоб получить ваше имя в WSTRING
-----
```cpp
#include <iostream>
#include <string>
#include <input.h>

int main() {
  std::wstring name = winput("What is your name: ");
  std::wcout << "Your name: " << name << std::endl;
}
```

Используем библиотеку, чтоб получить ваш возраст в INT
-----
```cpp
#include <iostream>
#include <input.h>

int main() {
  int i = stoi(input("How many your old: "));
  std::cout << i << std::endl;
}
```
