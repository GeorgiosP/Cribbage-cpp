#include <string>
#include <fstream>
#include <map>

class FileReader
{
    private:
        std::string path;
    public:
        FileReader(std::string _path);
        std::string ReadFile();
        std::string ReadFileWithReplace(std::map<char, char> _replacements);
};