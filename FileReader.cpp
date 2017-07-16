#include "FileReader.h"

FileReader::FileReader(std::string _path)
{
    FileReader::path = _path;
}

std::string FileReader::ReadFile()
{
    std::ifstream file;
    std::string line;
    std::string text;

    file.open("card.txt");

    while (std::getline(file, line)) {
        text += line + "\n";
    }   

    file.close();

    return text;
}

std::string FileReader::ReadFileWithReplace(std::map<char, char> _replacements)
{
    return "";
}