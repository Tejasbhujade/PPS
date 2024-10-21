#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream inFile("example.txt"); // Open a file for reading
    string line;

if (inFile.is_open()) {
    while (getline(inFile, line)) { // Read line by line
    cout << line << endl;          // Print each line
  }
  inFile.close(); // Close the file
} else {
    cout << "Error: Could not open the file." << endl;
}

return 0;
}