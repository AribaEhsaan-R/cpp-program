#include <iostream>
using namespace std;

#include <iostream>

void reverse_array(int p[], int size) {
    
    for (int i = 0; i < size / 2; i++) {
        int temp = p[i];
        p[i] = p[size - i - 1];
        p[size - i - 1] = temp;
    }
}

int main() {
    const int size = 10;
    int p[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << p[i] << " ";
    }
    cout << endl;

    reverse_array(p, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}

