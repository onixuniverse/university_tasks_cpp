// Будем рассматривать только строки, состоящие из заглавных английских букв. Например, рассмотрим строку AAAABCCCCCDDDD. 
// Длина этой строки равна 14. Поскольку строка состоит только из английских букв, повторяющиеся символы могут быть удалены 
// и заменены числами, определяющими количество повторений. Таким образом, данная строка может быть представлена как 4AB5C4D. 
// Длина такой строки 7. Описанный метод мы назовем упаковкой строки. Напишите программу, которая берет упакованную строку и 
// восстанавливает по ней исходную строку.

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const char ABC [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char DIGITS [] = "0123456789";


string unpackingString(string sourceString) {
    int i = 0;
    char tempSym = ' ';
    string resultString = "", tempNum = "";

    if (strchr(ABC, sourceString[0])) {
        resultString += sourceString[0];
        i = 1;
    }

    for (i; i <= sourceString.length(); i++) {
        if (strchr(DIGITS, sourceString[i])) {
            tempNum += sourceString[i];
            continue;
        }
        if (strchr(ABC, sourceString[i-1]) && strchr(ABC, sourceString[i])) {
            tempNum = "1";
        }

        if (strchr(ABC, sourceString[i])) {
            tempSym = sourceString[i];
            resultString += string(stoi(tempNum), tempSym);
            tempNum = "";
        }
    }
    return resultString;
}


bool protect(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (not ((strchr(ABC, str[i]))) || ((strchr(DIGITS, str[i])))) {}
            return false;
    }

    return true;
}


int main()
{
    string sourceString;
    cout << "Enter the packed string in uppercase: ";
    cin >> sourceString;

    if (protect(sourceString)) {
        string unpackedString = unpackingString(sourceString);
        printf("Unpacked string: %s\n", unpackedString.c_str());
    }
    else {
        cout << "Entered a wrong string!" << endl;
    }
    
    system("pause");

    return 0;
}
