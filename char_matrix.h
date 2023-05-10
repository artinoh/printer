#pragma once
#include <unordered_map>
#include <string>
#include <array>
#include <vector>
#include <string>
#include <iostream>



static constexpr int size = 8;
static constexpr int num_runs = 10;

class char_matrix
{
using matrix = std::array<std::array<char, size>, size>;

public:
    char_matrix();
    ~char_matrix() = default;
    void print();

private:
    void populate_chars();
    void map_string(const std::string& str);
    void print_col(int col);
    void shift_print_buffer();
    void add_col_to_print_buffer();
    void add_space_to_print_buffer();
    void print_mapped_chars();
    std::string get_string();

    
    int m_current_col = 0;
    std::array<std::vector<char>, size> m_mapped_chars;
    std::array<std::vector<char>, size> m_print_buffer;
    std::unordered_map<char, matrix> m_char_map;
    
};

