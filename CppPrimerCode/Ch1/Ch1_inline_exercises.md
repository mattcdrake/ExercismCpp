# Section Exercises

## Chapter 1

### Section 1.2

1.3) 

```cpp
#include <iostream>

int main() 
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
```

1.4)

```cpp
#include <iostream>

int main() 
{
    std::cout << 3 * 3 << std::endl;
    return 0;
}
```

1.5)  
_Every operand on its own line_
```cpp
#include <iostream>

int main() {
    std::cout << "Please enter two numbers:";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and "; 
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;
    return 0;
} 
```

1.6)

Not legal because the `;` terminator separates the output operator from successive operands. This could be fixed by adding another `std::cout` reference or by removing the `;` terminator.