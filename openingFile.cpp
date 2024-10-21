#include<fstream> //Include the file stream library
#include<iostream> //For standard input/output
using namespace std;

int main() {
    ifstream inputFile("example.txt"); //Opens a file for reading
    ofstream outputFile("example.txt"); //Opens a file for writing
    fstream file("example.txt,ios::out"); //Opens a file for both reading and writing
    
    return 0;
}