#ifndef LAB_INHERITANCE_MYDATAFILE_H
#define LAB_INHERITANCE_MYDATAFILE_H

#include <fstream>
#include <string>
#include <iostream>

#include "IFile.h"
#include "MyData.h"

class MyDataFile : public IFile {
private:
    MyData* data;
    std::fstream file;
public:
    explicit MyDataFile(MyData* data);
    explicit MyDataFile(const std::string& file);

    void open() override;
    void close() override;
    void seek() override;
    void read() override;
    void write() override;
    void getPosition() override;
    void getLength() override;

};


#endif //LAB_INHERITANCE_MYDATAFILE_H
