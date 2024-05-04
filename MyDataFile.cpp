#include "MyDataFile.h"

using namespace std;

MyDataFile::MyDataFile(MyData* data):
        data(data)
{}

MyDataFile::MyDataFile(const std::string& file): file(file) {
    string field1;
    string field2;

    this->file >> field1 >> field2;

    data = new MyData{
        field1,
        field2
    };

}

void MyDataFile::open() {
    cout << "Open override" << endl;
}

void MyDataFile::close() {
    cout << "Close override" << endl;
}

void MyDataFile::seek() {
    cout << "Seek override" << endl;
}

void MyDataFile::read() {
    cout << "Reed override" << endl;
}

void MyDataFile::write() {
    cout << "Write override" << endl;
}

void MyDataFile::getLength() {
    cout << "getLenght override" << endl;
}

void MyDataFile::getPosition() {
    cout << "getPosition override" << endl;
}