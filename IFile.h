#ifndef LAB_INHERITANCE_IFILE_H
#define LAB_INHERITANCE_IFILE_H

class IFile{
public:
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void seek() = 0;
    virtual void read() = 0;
    virtual void write() = 0;
    virtual void getPosition() = 0;
    virtual void getLength() = 0;
};

#endif //LAB_INHERITANCE_IFILE_H
