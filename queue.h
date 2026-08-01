#include <vector>
class Queue {
    std::vector<int> v;
public:
    void push(int x) { v.push_back(x); }
    int pop() {
        int x = v.front();
        v.erase(v.begin());
        return x;
    }
};