#include "char_matrix.h"

int main(int argc, char** argv)
{
    std::string str;
    if (argc > 1)
    {
        str = argv[1];
    }
    else
    {
        str = "TESTING";
    }
    char_matrix cm(str);
    cm.print();
    //cm.print_mapped_chars();
    return 0;
}
