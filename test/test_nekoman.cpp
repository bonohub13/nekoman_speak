#include <iostream>
#include <vector>
#include "nekoman.hpp"

void output_nekoman() // get_nekoman test
{
    for (auto &neko : nekoman::get_nekoman())
    {
        std::cout << neko << std::endl;
    }
}

int test_in_mode(int argc, char** argv)
{
    for (unsigned int i=1; i<argc; i++)
    {
        if (argv[i] == "neko")
            output_nekoman();
        else
        {
            std::cout << "\033[0;31m" << "Invalid mode" << "\33[0m" << std::endl;
            return -1;
        }
    }

    return 0;
}

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        return test_in_mode(argc, argv);
    }
    else
        output_nekoman();

    return 0;
}