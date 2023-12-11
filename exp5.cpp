#include <iostream>
using namespace std;

int n;
#define size 10

template<class T>
void selection(T A[size]) {
    // Function template that uses the selection sort algorithm
    int i, j, min;
    T temp;
    
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[min])
                min = j;
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    cout << "\nSorted array:";
    for (i = 0; i < n; i++) {
        cout << "\t" << A[i];
    }
}

int main() {
    int A[size];
    float B[size];
    int i;

    cout << "\n\t\t Selection Sort\n";

    // Handling Integer elements
    cout << "\n Handling Integer elements";
    cout << "\n Enter the number of elements ";
    cin >> n;
    cout << "Enter the integer elements\n";
    for (i = 0; i < n; i++)
        cin >> A[i];
    selection(A);

    // Handling Float elements
    cout << "\n\t Handling Float elements";
    cout << "\n Enter the number of elements ";
    cin >> n;
    cout << "Enter the float elements\n";
    for (i = 0; i < n; i++)
        cin >> B[i];
    selection(B);

    cout << "\n";
    return 0;
}
