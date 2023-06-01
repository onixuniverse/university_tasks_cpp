#include "Templates.h"

using namespace rapidxml;

// Функция для десериализации списка фильмов из XML
std::vector<Film> deserializeFilmsFromXml(const std::string& filename) {
    std::vector<Film> films;

    // Загрузка XML из файла
    file<> xmlFile(filename.c_str());
    xml_document<> doc;
    doc.parse<0>(xmlFile.data());

    // Получение корневого элемента "films"
    xml_node<>* rootNode = doc.first_node("films");

    // Обход каждого элемента "Film"
    for (xml_node<>* FilmNode = rootNode->first_node("film"); FilmNode; FilmNode = FilmNode->next_sibling("film")) {
        Film Film;

        // Получение значений элементов фильма
        Film.id = FilmNode->first_node("id")->value();
        Film.title = FilmNode->first_node("title")->value();
        Film.year = FilmNode->first_node("year")->value();
        Film.duration = FilmNode->first_node("duration")->value();

        // Получение значений элементов списков
        for (xml_node<>* directorNode = FilmNode->first_node("director"); directorNode; directorNode = directorNode->next_sibling("director")) {
            Film.directors.push_back(directorNode->value());
        }

        for (xml_node<>* writerNode = FilmNode->first_node("writer"); writerNode; writerNode = writerNode->next_sibling("writer")) {
            Film.writers.push_back(writerNode->value());
        }

        for (xml_node<>* actorNode = FilmNode->first_node("actor"); actorNode; actorNode = actorNode->next_sibling("actor")) {
            Film.actors.push_back(actorNode->value());
        }

        films.push_back(Film);
    }

    return films;
}