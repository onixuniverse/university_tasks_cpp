#include <iostream>
#include <random>
#include <ctime>
#include <tuple>
#include <string>

using namespace std;


void fillArray(int **arr, int countP) {
    for (int i = 0; i < countP; i++)
        for (int j = 0; j < 2; j++) {
            arr[i][j] = rand() % 201 - 100;
        }
}


int** createArray(int countP) {
    int** arr = new int* [countP];

    for (int i = 0; i < countP; i++)
        arr[i] = new int[2];

    return arr;
}


bool checkTriangularity(int *t1, int *t2, int *t3) {
    if (t2[0] - t1[0] == 0 || t2[1] - t1[1] == 0)
        return false;
    else if ((t3[0] - t1[0]) / (t2[0] - t1[0]) != (t3[1] - t1[1]) / (t2[1] - t1[1]))
        return true;
    else
        return false;
}


tuple<int, int*, int*, int*> findMaxCountPoints(int **arr, int countP) {
    int maxCount = 0;
    int *p1, * p2, * p3;

    for (int xy1 = 0; xy1 < countP - 2; xy1++) {
        for (int xy2 = 1; xy2 < countP - 1; xy2++) {
            for (int xy3 = 2; xy3 < countP; xy3++) {
                int flag = 0;

                if (checkTriangularity(arr[xy1], arr[xy2], arr[xy3])) {

                    for (int xy = 0; xy < countP; xy++) {
                        int f1 = (arr[xy1][0] - arr[xy][0]) * (arr[xy2][1] - arr[xy1][1]) - (arr[xy2][0] - arr[xy1][0]) * (arr[xy1][1] - arr[xy][1]);
                        int f2 = (arr[xy2][0] - arr[xy][0]) * (arr[xy3][1] - arr[xy2][1]) - (arr[xy3][0] - arr[xy2][0]) * (arr[xy2][1] - arr[xy][1]);
                        int f3 = (arr[xy3][0] - arr[xy][0]) * (arr[xy1][1] - arr[xy3][1]) - (arr[xy1][0] - arr[xy3][0]) * (arr[xy3][1] - arr[xy][1]);

                        if (f1 == 0 || f2 == 0 || f3 == 0)
                            flag++;
                    }
                    if (flag >= maxCount) {
                        maxCount = flag;
                        p1 = arr[xy1];
                        p2 = arr[xy2];
                        p3 = arr[xy3];
                        flag = 0;
                    }
                }
            }
        }
    }
    return {maxCount, p1, p2, p3};
}


bool protect(string countP) {

    for (int i = 0; i < countP.length(); i++) {
        if (isdigit(countP[i])) {}
        else return false;
    }

    int intCountP = stoi(countP);

    if (intCountP < 3)
        return false;

    return true;
}


int main()
{   
    start:
    string countPoints = "";
    cout << "Enter the number of points (more than 3): ";
    cin >> countPoints;

    if (protect(countPoints)) {
        int** arrPoints = createArray(stoi(countPoints));

        srand((unsigned)time(0)); // рандом-рандом чисел
        fillArray(arrPoints, stoi(countPoints));

        int maxCount, * p1, * p2, * p3;
        tie(maxCount, p1, p2, p3) = findMaxCountPoints(arrPoints, stoi(countPoints));

        printf("\nThe number of points: %s\n", countPoints.c_str());
        printf("Maximum: %d (including vertices)\n", maxCount);
        printf("Triangle vertices:\nP1: (%d, %d)\nP2: (%d, %d)\nP3: (%d, %d)\n", p1[0], p1[1], p2[0], p2[1], p3[0], p3[1]);

        delete* arrPoints;
    }
    else {
        cout << "Wrong number of points!\n";
        goto start;
    }

    return 0;
}
