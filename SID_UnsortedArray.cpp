#include <iostream>
#include <vector>

using namespace std;

//Search
int findElement(vector<int>& arr, int value){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==value){
            return i;
        }
        else
            return -1;
    }
}

void insertElement(vector<int>& arr, int value, int position){
    if(position<0 || position>arr.size()){
        return;
    }
    arr.insert(arr.begin()+position,value);
}

void deleteElement(vector<int>& arr, int value){
    int index=findElement(arr,value);
    if(value!=-1){
        arr.erase(arr.begin()+index);
        cout<< "Element "<< value<< " is deleted";
    }else{
        cout<<"Element not found";
    }

}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
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
                int index = findElement(arr, target);
                if (index != -1) {
                    cout << "Element found at index: " << index << endl;
                } else {
                    cout << "Element not found in the array!" << endl;
                }
                break;
            }
            case 2: {
                int element, position;
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position to insert (0-" << arr.size() << "): ";
                cin >> position;
                insertElement(arr, element, position);
                cout << "Element " << element << " inserted at position " << position << endl;
                break;
            }
            case 3: {
                int element;
                cout << "Enter the element to delete: ";
                cin >> element;
                deleteElement(arr, element);
                break;
            }
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

}