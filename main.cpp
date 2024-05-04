#include "MyData.h"
#include "MyDataFile.h"

int main() {

    auto data = new MyData{
        "dfaskdjfhasd",
        "weeufsdfasuf"
    };

    MyDataFile file = MyDataFile(data);

    typedef void (MyDataFile::*MethodPtr)();

    MethodPtr menu[] = {
            &MyDataFile::open,
            &MyDataFile::close,
            &MyDataFile::getLength,
            &MyDataFile::getPosition,
            &MyDataFile::read,
            &MyDataFile::write,
            &MyDataFile::seek
    };

    int method = 0;

    while (true){
        std::cout << "Method number for the test (0 - 6): ";
        std::cin >> method;
        (file.*menu[method])();
    }



}
