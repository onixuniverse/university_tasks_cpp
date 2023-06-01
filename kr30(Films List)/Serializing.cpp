#include "Templates.h"

using namespace rapidxml;

// Функция для сериализации списка фильмов в XML
void serializeFilmsToXml(const std::vector<Film>& Films, const std::string& filename) {
    xml_document<> doc;

    // Создание корневого элемента "Films"
    xml_node<>* rootNode = doc.allocate_node(node_element, "films");
    doc.append_node(rootNode);

    // Сериализация каждого фильма
    for (const Film& Film : Films) {
        // Создание элемента "Film"
        xml_node<>* FilmNode = doc.allocate_node(node_element, "film");
        rootNode->append_node(FilmNode);

        // Создание и заполнение элементов фильма
        xml_node<>* idNode = doc.allocate_node(node_element, "id", Film.id.c_str());
        FilmNode->append_node(idNode);

        xml_node<>* titleNode = doc.allocate_node(node_element, "title", Film.title.c_str());
        FilmNode->append_node(titleNode);

        xml_node<>* yearNode = doc.allocate_node(node_element, "year", Film.year.c_str());
        FilmNode->append_node(yearNode);

        xml_node<>* durationNode = doc.allocate_node(node_element, "duration", Film.duration.c_str());
        FilmNode->append_node(durationNode);

        // Создание и заполнение элементов списков
        for (const std::string& director : Film.directors) {
            xml_node<>* directorNode = doc.allocate_node(node_element, "director", director.c_str());
            FilmNode->append_node(directorNode);
        }

        for (const std::string& writer : Film.writers) {
            xml_node<>* writerNode = doc.allocate_node(node_element, "writer", writer.c_str());
            FilmNode->append_node(writerNode);
        }

        for (const std::string& actor : Film.actors) {
            xml_node<>* actorNode = doc.allocate_node(node_element, "actor", actor.c_str());
            FilmNode->append_node(actorNode);
        }
    }

    // Сохранение XML в файл
    std::ofstream file(filename);
    file << doc;
    file.close();

    doc.clear();
}