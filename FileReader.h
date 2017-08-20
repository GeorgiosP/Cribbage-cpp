// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

#ifndef FILE_READER
#define FILE_READER 
#include <string>
#include <fstream>
#include <map>
#include <algorithm>

class FileReader
{
    public:
        std::string ReadFile(const char*);
        std::string ReadFileWithReplace(const char*, std::map<char, char> _replacements);
};  
#endif // FILE_READER