#include <iostream>
#include "enc.h"

int main() {
    enc::var<int> myVar;
    myVar.set(12345);

    std::cout << "Encrypted: " << myVar.getEncrypted() << std::endl;
    std::cout << "Decrypted: " << myVar.get() << std::endl;

    return 0;
}