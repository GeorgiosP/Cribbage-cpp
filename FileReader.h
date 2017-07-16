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