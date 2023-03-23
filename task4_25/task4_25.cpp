#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

struct RationalNumber {
    int numerator;
    int determinator;
} r;


vector<RationalNumber> createFillArray(int count) {
    vector<RationalNumber> arr;

    for (int i = 0; i <= count; i++) {
        RationalNumber rn;
        rn.numerator = rand() % 101 + 1;
        rn.determinator = rand() % 101 + 1;

        arr.push_back(rn);
    }

    return arr;
}

tuple<bool, RationalNumber, RationalNumber> findEqual(vector<RationalNumber> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i != j) {
                if (((float)arr[i].numerator / (float)arr[i].determinator) == ((float)arr[j].numerator / (float)arr[j].determinator)) {
                    return { true, arr[i], arr[j]};
                }
            }
        }
    }
    return { false, r, r };
}

RationalNumber findMaxRationalNumber(vector<RationalNumber> arr) {
    RationalNumber maxNumber;
    maxNumber.numerator = 0;
    maxNumber.determinator = 1;

    for (int i = 0; i < arr.size(); i++) {
        if ((arr[i].numerator / arr[i].determinator) > (maxNumber.numerator / maxNumber.determinator))
            maxNumber = arr[i];
    }
    return maxNumber;
}

int main()
{
    int count = 50;
    bool flagOne;
    RationalNumber resultOneFirst, resultOneSecond, resultTwo;

    srand(time(0));
    vector<RationalNumber> arrRationalNumbers;
    arrRationalNumbers = createFillArray(count);

    tie(flagOne, resultOneFirst, resultOneSecond) = findEqual(arrRationalNumbers);
    resultTwo = findMaxRationalNumber(arrRationalNumbers);
    

    for (int i = 0; i < arrRationalNumbers.size(); i++) {
        cout << arrRationalNumbers[i].numerator << "/" << arrRationalNumbers[i].determinator << " ";
    }
    cout << endl << endl;

    if (flagOne)
        printf("Equal: %d/%d == %d/%d\n", resultOneFirst.numerator, resultOneFirst.determinator, resultOneSecond.numerator, resultOneSecond.determinator);
    else
        cout << "There are no equal values" << endl;

    printf("Max: %d/%d\n", resultTwo.numerator, resultTwo.determinator);

    system("pause");
}
