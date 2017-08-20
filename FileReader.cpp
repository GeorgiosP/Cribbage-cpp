// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

#include "FileReader.h"

std::string FileReader::ReadFile(const char* _path)
{
    std::ifstream file;
    std::string line;
    std::string text;

    file.open(_path);

    while (std::getline(file, line)) {
        text += line + "\n";
    }   

    file.close();

    return text;
}

std::string FileReader::ReadFileWithReplace(const char* _path, std::map<char, char> _replacements)
{
    std::string result = ReadFile(_path);

    
    
    std::replace(result.begin(), result.end(), 'x', ' ');
    std::replace(result.begin(), result.end(), 'X', '4');
    std::replace(result.begin(), result.end(), 'Y', 'S');

    delete _path;

    return result;
}