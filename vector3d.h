#ifndef VECTOR_H
#define VECTOR_H

template<class T>
class vector3d
{
private:
	T x, y, z; // сами координаты
public:
    vector3d();
    ~vector3d();
    void SetVector(const char* const caption); // функция позволяет ввести координаты вектора
    void display(const char* const caption); // функция выводящая вектор на экран
    void summ(vector3d* vec1, vector3d* vec2); // получает вектор суммы
    void razn(vector3d* vec1, vector3d* vec2); // получает вектор разности
    void norm(vector3d* vec1); // получение ветораединичной длинны
    void copy(vector3d* vec1); // копирование вектора
    void modul(vector3d* vec1); // получение модуля вектора
    void umnscal(vector3d* vec1); // умножение вектора на скаляр(число)
    void scal(vector3d* vec1, vector3d* vec2); // скалярно умножает вектора
    void cos(vector3d* vec1, vector3d* vec2); // выводит косинус угла между векторами
    void sin(vector3d* vec1, vector3d* vec2); // выводит косинус угла между векторами
};
#endif
