#include <iostream>
#include <fstream>

class whdat {
    protected:

    
    private:
        void readata();
    
    public:

};

void whdat::readdata(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    int value;
    while (file >> value) {
        insert(value);
    }
    file.close();
}