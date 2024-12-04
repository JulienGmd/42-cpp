#include <cstdlib>
#include <fstream>
#include <iostream>

void replace(std::string &str, size_t start, size_t length, const std::string &replace_with)
{
    std::string new_str = str.substr(0, start) + replace_with + str.substr(start + length);
    str = new_str;
}

void replaceInFile(const std::string &filename, const std::string &to_replace, const std::string &replace_with)
{
    if (to_replace.empty())
        throw std::runtime_error("to_replace cannot be empty");

    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open())
        throw std::runtime_error("could not open file " + filename);

    std::string filename_replace = filename + ".replace";
    std::ofstream ofs(filename_replace.c_str());
    if (!ofs.is_open())
        throw std::runtime_error("could not open file " + filename_replace);

    // Read the entire file into a string to handle multi-line replacements
    std::string file_contents((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());

    size_t pos = 0;
    while ((pos = file_contents.find(to_replace, pos)) != std::string::npos)
    {
        replace(file_contents, pos, to_replace.length(), replace_with);
        pos += replace_with.length();
    }

    ofs << file_contents;

    ifs.close();
    ofs.close();
}

// ./a.out Makefile "OBJ_DIR" "a"
int main(int ac, char **av)
{
    try
    {
        if (ac != 4)
        {
            std::cerr << "Usage: " << av[0] << " <filename> <to_replace> <replace_with>" << std::endl;
            return 1;
        }

        replaceInFile(av[1], av[2], av[3]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
