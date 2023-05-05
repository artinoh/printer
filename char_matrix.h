#pragma once
#include <unordered_map>
#include <string>
#include <array>
#include <vector>
#include <string>


static constexpr int size = 8;
static constexpr int num_runs = 10;

class char_matrix
{
using matrix = std::array<std::array<char, size>, size>;

public:
    char_matrix(const std::string& str);
    ~char_matrix() = default;
    void print();
    void print_mapped_chars();


private:
    void populate_chars();
    void map_string();
    void print_col(int col);
    void shift_print_buffer();
    void add_col_to_print_buffer();
    void add_space_to_print_buffer();
    


    int m_current_col = 0;
    std::string m_string;
    std::array<std::vector<char>, size> m_mapped_chars;
    std::array<std::vector<char>, size> m_print_buffer;
    std::unordered_map<char, matrix> m_char_map;
    
};

