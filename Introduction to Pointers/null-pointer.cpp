#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;
    
    cout << ptr << "\n";
    cout << *ptr << "\n";   // segmentation fault
    cout << "BYE";
    return 0;
}