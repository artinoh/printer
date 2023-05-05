#include "char_matrix.h"

int main()
{

    std::string str = "TESTING";
    char_matrix cm(str);
    cm.print();
    //cm.print_mapped_chars();
    return 0;
}
