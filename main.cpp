#include "char_matrix.h"

int main()
{

    std::string str = "I LOVE YOU MANE!";
    char_matrix cm(str);
    cm.print();
    //cm.print_mapped_chars();
    return 0;
}
