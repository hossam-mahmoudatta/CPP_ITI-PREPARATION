#include "CARS_CLASS_HDR.h"

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!\n"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}