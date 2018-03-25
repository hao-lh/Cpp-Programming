#include "gcc_template.h"
#include <iostream>

using namespace std;

int main() {
    Buffer<float> f(10);
    f.insert(0.25);
    f.insert(0.75);
    f.insert(1.0 + f.get(0));
    cout << "stored value = " << f.get(0) << endl;

    cout << "traversal the container..." << endl;
    for (int i=0; i<10; i++)
        cout << f.get(i) << endl;
}
