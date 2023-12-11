#include <iostream>
#include <fstream> // Header files for stream operations
using namespace std;

const int MAX = 10; // declare size of array as const. Thus, MAX can't be changed
int array1[MAX] = {10, 20, 30, 40, 50};
int array2[MAX];

int main() {
    ofstream os;
    os.open("input.dat", ios::trunc | ios::binary);
    // opens the file in binary mode and previous contents deleted

    if (!os) { // Error handling
        cerr << "Could not open output file\n";
        exit(1);
    }

    cout << "Writing contents to the file....\n\n";
    os.write((char*)&array1, sizeof(array1)); // Writes the contents of array1 into the output stream object

    if (!os) { // Error in write operation
        cerr << "Could not write to file\n";
        exit(1);
    }

    os.close(); // close the file

    ifstream is; // create input stream object
    is.open("input.dat", ios::binary); // open the file

    if (!is) { // error handling
        cerr << "Could not open input file\n";
        exit(1);
    }

    cout << "Reading contents from the input file....\n";
    is.read((char*)&array2, sizeof(array2)); // Reads the contents from the stream and copies into array2

    if (!is) {
        cerr << "Could not read from file\n";
        exit(1);
    }

    cout << "Contents of array2:\n";
    for (int j = 0; j < MAX; j++) { // Prints the contents of array2
        cout << " " << array2[j];
    }

    return 0;
}
