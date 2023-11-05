#include <iostream>
#include <vector>
#include "arrays.h"

using std::vector;


int main() {
    std::cout << "Hello, World!" << std::endl;
//    vector v {1, 2, 4};
    int a[] {1, 2, 3};
    Vector v {a, 3};
//    print(vec);
    return 0;
}
