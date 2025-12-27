#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:";
    for(int i=0;i<n;i++){
        cout <<"arr[" << i << "]";
        cin >> arr[i];
    }

    cout << "Even elements of an Array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << "";
        }
    }

    return 0;
}
