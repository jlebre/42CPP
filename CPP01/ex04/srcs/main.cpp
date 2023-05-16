#include "sed.hpp"

void    ft_error(std::string err)
{
    std::cout << err << std::endl;
    exit (-1);
}

char *str2chr(std::string str)
{
    int len = str.length();
    char *new_str = new char[len + 1];
    new_str[len] = '\0';
    for (int i = 0; i < len; i++)
        new_str[i] = str[i];
    return new_str;
    //  Cant forget to use delete [] as it is maually allocated
}

char    *getFileName(char *name)
{
    int i = 0;

    std::string str;
    while (name[i] && name[i] != '.')
    {
        str += name[i];
        i++;
    }
    str += ".replace";
    char *new_str = str2chr(str);
    return new_str;
}

std::string ft_replace(std::string str1, int start, int n, std::string str2)
{
    std::string new_str;
    int i = start + n;
    new_str = str1.substr(0, start);
    new_str += str2;
    new_str += str1.substr(i, (str1.length() - i));
    return new_str;
}

std::string check_line(std::string line, std::string str1, std::string str2, int *counter)
{
    (void)counter;
    (void)str1;
    (void)str2;
    int i = 0;

    while (line[i])
    {
        if (line[i] == str1[0])
        {
            int check = 0;
            int j = 0;
            while (line[i] && str1[j])
            {
                if (line[i] == str1[j])
                {
                    i++;
                    j++;
                    check++;
                }
                else
                    break;
            }
            if (check == (int)str1.length())
            {
                line = ft_replace(line, i - check, check, str2);
                *counter += 1;
            }
        }
        else
            i++;
    }
    return (line);
}

int main(int argc, char **argv)
{
    if (argc != 4) // ./sed "file.txt" "str1" "str2"
        ft_error("Error: Wrong number of arguments");
    int counter =  0;
    char *file = argv[1], *newFile;
    std::string str1 = argv[2], str2 = argv[3], line;
    std::ifstream inputFile;

    inputFile.open(file); // Try to open the file
    if (inputFile.is_open()) // Check if the file opened correctly
    {
        newFile = getFileName(file);
        std::ofstream outputFile(newFile, std::ofstream::out); // Create new file
        while (std::getline(inputFile, line))
        {
            outputFile << check_line(line, str1, str2, &counter) << std::endl;
        }
        outputFile.close(); // Close new file
        std::cout << "\033[0;32m";
        std::cout << newFile << " successfully created!\033[0m\n";
        std::cout << "There were " << counter << " occurences of \"";
        std::cout << str1 << "\"\n";
        delete [] newFile; // Delete the char * allocated manually in str2chr
    }
    else
        ft_error("Error: Cannot open the file");
    inputFile.close(); // Close the file
    return 0;
}