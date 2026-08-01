#include <iostream>
#include "queue.h"
int main() {
    Queue q;
    q.push(100);
    std::cout << q.pop() << std::endl;
    return 0;
}