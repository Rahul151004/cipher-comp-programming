#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dynamicArray;

    int n;
    cout << "Enter the number of elements you want to store: ";
    cin >> n;

    dynamicArray.resize(n);

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> dynamicArray[i];
    }

    cout << "Elements in the vector:" << endl;
    for (int i = 0; i < dynamicArray.size(); i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    int newElement;
    cout << "Enter a new element to add to the vector: ";
    cin >> newElement;

    dynamicArray.push_back(newElement);

    cout << "Updated vector elements:" << endl;
    for (int i = 0; i < dynamicArray.size(); i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    return 0;
}
