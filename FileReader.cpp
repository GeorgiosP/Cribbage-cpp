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

    return "";
}