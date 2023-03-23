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
        rn.numerator = rand() % 101;
        rn.determinator = rand() % 101 + 1;

        arr.push_back(rn);
    }

    return arr;
}

tuple<bool, RationalNumber> findEqual(vector<RationalNumber> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i != j) {
                if ((arr[i].numerator / arr[i].determinator) == (arr[j].numerator / arr[j].determinator)) {
                    return { true, arr[i] };
                }
            }
        }
    }
    return { false, r };
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
    RationalNumber resultOne, resultTwo;

    srand(time(0));
    vector<RationalNumber> arrRationalNumbers;
    arrRationalNumbers = createFillArray(count);

    tie(flagOne, resultOne) = findEqual(arrRationalNumbers);
    resultTwo = findMaxRationalNumber(arrRationalNumbers);
    

    for (int i = 0; i < arrRationalNumbers.size(); i++) {
        cout << arrRationalNumbers[i].numerator << "/" << arrRationalNumbers[i].determinator << ", ";
    }
    cout << endl;

    if (flagOne)
        printf("Equal: %d/%d == %d/%d\n", resultOne.numerator, resultOne.determinator, resultOne.numerator, resultOne.determinator);
    else
        cout << "There are no equal values" << endl;

    printf("Max: %d/%d\n", resultTwo.numerator, resultTwo.determinator);
    
    system("pause");
}
