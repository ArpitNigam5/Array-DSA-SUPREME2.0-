#include <iostream>
using namespace std;

int main() {

  int arpit[5];

  for (int i = 0; i < 5; i++) {
    cin >> arpit[i];
  }
  for (int i = 0; i < 5; i++) {
    cout << arpit[i] << " ";
  }

  for (int i = 0; i < 5; i++) {
    arpit[i] = 2 * arpit[i];
  }

    cout<<endl;

  for (int i = 0; i < 5; i++) {
    cout << arpit[i] << " ";
  }
}