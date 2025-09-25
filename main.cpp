#include <iostream>
#include <cmath> // For std::pow in problem 3

using namespace std;

int main() {
    int choice;

    // Display a menu for the user to choose a task
    cout << "Виберіть завдання для виконання:" << endl;
    cout << "1. Перевести кут з радіанів в градуси" << endl;
    cout << "2. Перевести температуру з Фаренгейта в Цельсій" << endl;
    cout << "3. Знайти середнє арифметичне та суму квадратів трьох чисел" << endl;
    cout << "Введіть номер завдання (1-3): ";
    cin >> choice;

    cout << "---------------------------------------" << endl;

    // Use a switch statement to execute the code for the selected task
    switch (choice) {
        case 1: { // Problem 1: Radians to Degrees
            double alpha_rad, alpha_deg;
            const double PI = 3.14;

            cout << "Введіть значення кута в радіанах (0 <= alpha < 2 * PI): ";
            cin >> alpha_rad;

            alpha_deg = alpha_rad * 180 / PI;

            cout << "Значення кута в градусах: " << alpha_deg << "°" << endl;
            break;
        }

        case 2: { // Problem 2: Fahrenheit to Celsius
            double TF, TC;

            cout << "Введіть значення температури в градусах Фаренгейта: ";
            cin >> TF;

            TC = (TF - 32) * 5 / 9;

            cout << "Значення температури в градусах Цельсія: " << TC << "°C" << endl;
            break;
        }

        case 3: { // Problem 3: Arithmetic Mean and Sum of Squares
            double a, b, c;
            double M, Q;

            cout << "Введіть три дійсних числа (a, b, c): ";
            cin >> a >> b >> c;

            // Calculate the arithmetic mean
            M = (a + b + c) / 3;

            // Calculate the sum of squares
            Q = a * a + b * b + c * c;
            // Alternative using pow(): Q = pow(a, 2) + pow(b, 2) + pow(c, 2);

            cout << "Середнє арифметичне (M): " << M << endl;
            cout << "Сума квадратів (Q): " << Q << endl;
            break;
        }

        default: {
            cout << "Невірний вибір. Будь ласка, введіть число від 1 до 3." << endl;
            break;
        }
    }

    return 0;
}