# enc.h - Lightweight Variable Encryption

A single-header C++ library for basic variable encryption. Works with **C++14** or later, no extra dependencies required.

## Features
- Randomized keys for each variable.
- Simple encryption and decryption.
- Lightweight and portable.
- Adjustable encryption round amount.

## Usage
```cpp
#include <iostream>
#include "enc.h"

int main() {
    enc::var<int> myVar;
    myVar.set(12345);

    std::cout << "Encrypted: " << myVar.getEncrypted() << std::endl;
    std::cout << "Decrypted: " << myVar.get() << std::endl;

    return 0;
}
```
