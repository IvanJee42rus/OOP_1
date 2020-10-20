#include <iostream> // подключаем стандартные библиотеки + библиотеку мат. функций.

#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");

    locale::global(locale(""));
    // обьявляем экземпляры класса: два вектора для работы и один для результатов.
    vector3d<double> *vector1 = new vector3d<double>;
    vector3d<double> *vector2 = new vector3d<double>;
    vector3d<double> *result_vector = new vector3d<double>;

    int x; // переменная для выбора в меню далее само меню
    while (true)
    {
        cout << "------------------------МЕНЮ-------------------------" << endl
            << "\t1 - Сумма двух векторов" << endl
            << "\t2 - Разность двух векторов" << endl
            << "\t3 - Нормировка вектора" << endl
            << "\t4 - Скалярное произведение векторов" << endl
            << "\t5 - Косинус угла между векторами" << endl
            << "\t6 - Синус угла между векторами" << endl
            << "\t7 - Копирование вектора" << endl
            << "\t8 - Модуль вектора" << endl
            << "\t9 - Умножние вектора на скаляр" << endl
            << "\t0 - Выход из программы" << endl
            << "\t-----------------------------------------------------" << endl
            << "Для продолжения введите номер выбранной функции и нажмите 'Enter'" << endl;
        cin >> x;

        system("cls"); // очистим экран.

        switch (x) // смотрим что выбрали в меню и вызываем соответствующие функции.
        {
        case 1:
            vector1->SetVector("Координаты первого вектора:");
            vector2->SetVector("Координаты второго вектора:");
            result_vector->summ(vector1, vector2);
            result_vector->display("-----------НОВЫЙ ВЕКТОР----------");
            break;

        case 2:
            vector1->SetVector("Координаты первого вектора:");
            vector2->SetVector("Координаты второго вектора:");
            result_vector->razn(vector1, vector2);
            result_vector->display("-----------НОВЫЙ ВЕКТОР----------");
            break;

        case 3:
            vector1->SetVector("Координаты вектора:");
            result_vector->norm(vector1);
            result_vector->display("-----------ЕДИНИЧНЫЙ ВЕКТОР----------");
            break;

        case 4:
            vector1->SetVector("Координаты первого вектора:");
            vector2->SetVector("Координаты второго вектора:");
            result_vector->scal(vector1, vector2);
            break;

        case 5:
            vector1->SetVector("Координаты первого вектора:");
            vector2->SetVector("Координаты второго вектора:");
            result_vector->cos(vector1, vector2);
            break;

        case 6:
            vector1->SetVector("Координаты первого вектора:");
            vector2->SetVector("Координаты второго вектора:");
            result_vector->sin(vector1, vector2);
            break;

        case 7:
            vector1->SetVector("Координаты вектора:");
            result_vector->copy(vector1);
            result_vector->display("-----------КОПИРОВАНИЕ ВЕКТОРА----------");
            break;

        case 8:
            vector1->SetVector("Введите координаты вектора:");
            result_vector->modul(vector1);
            break;

        case 9:
            vector1->SetVector("Введите координаты вектора:");
            result_vector->umnscal(vector1);
            result_vector->display("УМНОЖЕНИЕ ВЕКТОРА НА СКАЛЯР");
            break;

        case 0:

            exit(0);
            break;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}