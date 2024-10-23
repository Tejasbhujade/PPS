#include <iostream>
#include <fstream>

using namespace std;

struct Data{
    int id;
    char name[50];
};

int main(){
    Data d1={1,"John Deo"};
    
    ofstream outfile("data.bin",ios::binary);
    if (outfile.is_open()){
        outfile.write(reinterpret_cast<char*>(&d1),sizeof(d1));
        outfile.close();
        cout<<"Data written to binary file."<<endl;
    }else{
        cout<<"Error: Could not open file."<<endl;
    }
    return 0;
    }