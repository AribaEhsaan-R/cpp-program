#include <iostream>
using namespace std;

int main() {
  const int size = 5;
  int numbers[size];
  int sum = 0; 

 
  cout << "Please enter " << size << " integers:\n";
  for (int i = 0; i < size; i++) {
    cout << "Enter value " << i + 1 << ": ";
    cin >> numbers[i];
  }

 
  for (int i = 0; i < size; i++) {
    sum += numbers[i];
  }

  
  cout << "The sum of the " << size << " integers is: " << sum << endl;

  return 0;
}

