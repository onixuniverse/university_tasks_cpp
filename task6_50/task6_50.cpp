#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>
#include <string>


std::vector<std::tuple<int, int, int>> readFile(std::string filePath) {
    std::ifstream rFile(filePath);
    std::vector<std::tuple<int, int, int>> coefficients;

    std::string a, b, c;
    while (rFile >> a >> b >> c) {
        coefficients.push_back({ stoi(a), stoi(b), stoi(c) });
    }
    
    return coefficients;
}

std::vector<std::tuple<int, int, int>> findParallelLines(int mode, std::vector<std::tuple<int, int, int>> coefficients) {
    std::vector<std::tuple<int, int, int>> parallelLines;

    int a1, b1, c1;
    std::tie(a1, b1, c1) = coefficients[0];

    for (int i = 1; i < coefficients.size(); i++) {
        int a, b, c;
        std::tie(a, b, c) = coefficients[i];
        if (a1 / b1 == a / b) {
            if (mode == 1)
                parallelLines.push_back({ a, b, c });
            else {
                if (a1 != a || b1 != b) {
                    parallelLines.push_back({ a, b, c });
                }
            }
        }
    }
    return parallelLines;
}

std::vector<std::tuple<int, int, int>> findIntersectingLines(int mode, std::vector<std::tuple<int, int, int>> coefficients) {
    std::vector<std::tuple<int, int, int>> intersectinglLines;

    int a1, b1, c1;
    std::tie(a1, b1, c1) = coefficients[0];

    for (int i = 1; i < coefficients.size(); i++) {
        int a, b, c;
        std::tie(a, b, c) = coefficients[i];

        if (!(a * b1 == a1 * b)) {
            for (int x = 0; x < 100; x++) {
                for (int y = 0; y < 100; y++) {

                    if (a * x + b * y == a1 * x + b * y) {
                        if (mode == 3) {
                            intersectinglLines.push_back({ a, b, c });
                            break;
                        }
                        else {
                            if (!(a * b1 == a1 * b)) {
                                intersectinglLines.push_back({ a, b, c });
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return intersectinglLines;
}

void writeFile(std::string filePath, std::vector<std::tuple<int, int, int>> result) {
    std::ofstream wFile(filePath, std::ios_base::app);
    
    for (const auto& e : result) {
        int a, b, c;
        std::tie(a, b, c) = e;
        wFile << a << " " << b << " " << c << "\n";
    }
}

int main()
{
    std::vector<std::tuple<int, int, int>> coefficients = readFile("f.txt");
    std::vector<std::tuple<int, int, int>> result;

    std::cout << "Choose a mode: ";
    std::string mode;
    std::cin >> mode;

    if (mode == "1" || mode == "2") {
        result = findParallelLines(stoi(mode), coefficients);
    }
    else if (mode == "3" || mode == "4") {
        result = findIntersectingLines(stoi(mode), coefficients);
    }
    else
        std::cout << "Wrong mode." << std::endl;

    writeFile("g.txt", result);
}
