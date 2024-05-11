#include <iostream>
#include <vector>

using namespace std;

// Binary Search
int binarySearch(const vector<int>& arr, int value) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

// Insertion in Sorted Order
void insertElement(vector<int>& arr, int value) {
    int i = 0;
    while (i < arr.size() && arr[i] < value) {
        i++;
    }
    arr.insert(arr.begin() + i, value);
}

// Deletion of Element
void deleteElement(vector<int>& arr, int value) {
    int index = binarySearch(arr, value);
    if (index != -1) {
        arr.erase(arr.begin() + index);
        cout << "Element " << value << " is deleted";
    } else {
        cout << "Element not found";
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int target;
                cout << "Enter the element to search: ";
                cin >> target;
                int index = binarySearch(arr, target);
                if (index != -1) {
                    cout << "Element found at index: " << index << endl;
                } else {
                    cout << "Element not found in the array!" << endl;
                }
                break;
            }
            case 2: {
                int element;
                cout << "Enter the element to insert: ";
                cin >> element;
                insertElement(arr, element);
                cout << "Element " << element << " inserted in sorted order." << endl;
                break;
            }
            case 3: {
                int element;
                cout << "Enter the element to delete: ";
                cin >> element;
                deleteElement(arr, element);
                cout << endl;
                break;
            }
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
