#ifndef TEMPLATES__H
#define TEMPLATES__H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "rapidxml-1.13/rapidxml.hpp"
#include "rapidxml-1.13/rapidxml_utils.hpp"
#include "rapidxml-1.13/rapidxml_print.hpp"

struct Film {
    std::string id;
    std::string title;
    std::string year;
    std::string duration;
    std::vector<std::string> directors;
    std::vector<std::string> writers;
    std::vector<std::string> actors;
};

inline std::vector<Film> films;

void serializeFilmsToXml(const std::vector<Film>& Films, const std::string& filename);
std::vector<Film> deserializeFilmsFromXml(const std::string& filename);

#endif // !TEMPLATES__H
