#include <iostream> 
#include <cmath>

#include "vector3d.h"

using namespace std;

template<class T>
vector3d<T>::vector3d() // конструктор класса
{
    x = T(0);
    y = T(0);
    z = T(0);
}

template<class T>
vector3d<T>::~vector3d() // пустой деструктор
{
}

template<class T>
void vector3d<T>::SetVector(const char* const caption)
{
    cout << caption << endl;
    cout << "X = ";
    cin >> x; // вводим координаты вектора
    cout << "Y = ";
    cin >> y;
    cout << "Z = ";
    cin >> z;
}

template<class T>
void vector3d<T>::summ(vector3d* vec1, vector3d* vec2)
{
    x = vec1->x + vec2->x; // складываем координаты векторов
    y = vec1->y + vec2->y;
    z = vec1->z + vec2->z;
}

template<class T>
void vector3d<T>::razn(vector3d* vec1, vector3d* vec2)
{
    x = vec1->x - vec2->x; // вычитаем координаты векторов
    y = vec1->y - vec2->y;
    z = vec1->z - vec2->z;
}

template<class T>
void vector3d<T>::norm(vector3d* vec1)
{
    x = vec1->x / vec1->x;
    y = vec1->y / vec1->y;
    z = vec1->z / vec1->z;
}

template<class T>
void vector3d<T>::umnscal(vector3d* vec1)
{
    float d;
    cout << "Введите число для умножения";
    cout << "\nd = ";
    cin >> d;
    x = vec1->x * d;
    y = vec1->y * d;
    z = vec1->z * d;
}

template<class T>
void vector3d<T>::copy(vector3d* vec1)
{
    x = vec1->x;
    y = vec1->y;
    z = vec1->z;
}

template<class T>
void vector3d<T>::modul(vector3d* vec1)
{
    float u = sqrt((vec1->x * vec1->x) + (vec1->y * vec1->y) + (vec1->z * vec1->z));
    cout << u << endl;
}

template<class T>
void vector3d<T>::scal(vector3d* vec1, vector3d* vec2)
{
    float dot = (vec1->x * vec2->x) + (vec1->y * vec2->y) + (vec1->z * vec2->z);
    // строчка выше умножает скалярно два вектора
    cout << "РЕЗУЛЬТАТ СКАЛЯРНОГО ПРОИЗВЕДЕНИЯ ВЕКТОРОВ:" << endl
        << dot << endl;
}

template<class T>
void vector3d<T>::cos(vector3d* vec1, vector3d* vec2)
{
    float dot = (vec1->x * vec2->x) + (vec1->y * vec2->y) + (vec1->z * vec2->z);
    float u = sqrt((vec1->x * vec1->x) + (vec1->y * vec1->y) + (vec1->z * vec1->z));
    float u2 = sqrt((vec2->x * vec2->x) + (vec2->y * vec2->y) + (vec2->z * vec2->z));
    // по формуле находим косинус угла между векторами
    float cos = (dot / (u * u2));
    cout << "КОСИНУС УГЛА МЕЖДУ ВЕКТОРАМИ:" << endl
        << cos << endl;
}

template<class T>
void vector3d<T>::sin(vector3d* vec1, vector3d* vec2)
{
    float dot = (vec1->x * vec2->x) + (vec1->y * vec2->y) + (vec1->z * vec2->z);
    float u = sqrt((vec1->x * vec1->x) + (vec1->y * vec1->y) + (vec1->z * vec1->z));
    float u2 = sqrt((vec2->x * vec2->x) + (vec2->y * vec2->y) + (vec2->z * vec2->z));
    // по формуле находим коинус угла между векторами
    float cos = (dot / (u * u2));
    // с помощью косинуса вычесляем синус угла между векторами
    float sin = sqrt(1 - cos * cos);
    cout << "СИНУС УГЛА МЕЖДУ ВЕКТОРАМИ:" << endl
        << sin << endl;
}

template<class T>
void vector3d<T>::display(const char* const caption)
{
    cout << caption << endl
        << "Вектор с координатами:" << endl
        << "X = " << x << endl
        << "Y = " << y << endl
        << "Z = " << z << endl;
}