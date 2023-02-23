// 1.25 Составьте программу для проверки, можно ли заданное натуральное число представить в виде: 
// а) квадрата какого-либо простого числа; б) произведения трех простых чисел.


#include <iostream>
#include <string>
#include <tuple>

using namespace std;

bool is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


bool my_is_digit(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {}
        else { return false; }
    }
    return true;
}


tuple<bool, int> number_square(int num) {
    int s_num = sqrt(num);

    for (s_num; 2 <= s_num; s_num--) {
        if (is_prime(s_num)) {
            if (num == s_num * s_num) {
                return { true, s_num };
            }
        }
    }
    
    return { false, 0 };
}


tuple<bool, int, int, int> product_of_three(int num) {
    int first = 2, second = 2, third = 2;

    for (first; first < num; first++) {
        for (second; second < num; second++) {
            for (third; third < num; third++) {
                if (first * second * third == num) {
                    if (is_prime(first) and is_prime(second) and is_prime(third)) {
                        return { true, first, second, third };
                    }
                }
                else if (first * second * third > num) {
                    break;
                }
            }
        }
    }
    return { false, 0, 0, 0 };
}


int main()
{
    while (true) {
        string user_input;

        cout << "Enter natural number: ";
        cin >> user_input;

        if (my_is_digit(user_input)) {
            int number = stoi(user_input);

            if (number >= 1) {
                bool fflag;
                int fresult;
                tie(fflag, fresult) = number_square(number);

                if (fflag) {
                    cout << "Number "
                        << number
                        << " can be a square of "
                        << fresult
                        << endl;
                }
                bool sflag;
                int sfirst, ssecond, sthird;

                tie(sflag, sfirst, ssecond, sthird) = product_of_three(number);

                if (sflag) {
                    cout << "Number "
                        << number
                        << " can be a product of "
                        << sfirst << " and "
                        << ssecond << " and "
                        << sthird
                        << endl;
                }

                cout << endl;
            }
            else {
                cout << endl << "Number must be natural!" << endl;
            }
        }
        else {
            cout << endl << "Wrong number!" << endl;
        }
    }

    cout << "Good Bye!";
    return 0;
}