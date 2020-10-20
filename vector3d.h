#ifndef VECTOR_H
#define VECTOR_H

template<class T>
class vector3d
{
private:
	T x, y, z; // ���� ����������
public:
    vector3d();
    ~vector3d();
    void SetVector(const char* const caption); // ������� ��������� ������ ���������� �������
    void display(const char* const caption); // ������� ��������� ������ �� �����
    void summ(vector3d* vec1, vector3d* vec2); // �������� ������ �����
    void razn(vector3d* vec1, vector3d* vec2); // �������� ������ ��������
    void norm(vector3d* vec1); // ��������� ��������������� ������
    void copy(vector3d* vec1); // ����������� �������
    void modul(vector3d* vec1); // ��������� ������ �������
    void umnscal(vector3d* vec1); // ��������� ������� �� ������(�����)
    void scal(vector3d* vec1, vector3d* vec2); // �������� �������� �������
    void cos(vector3d* vec1, vector3d* vec2); // ������� ������� ���� ����� ���������
    void sin(vector3d* vec1, vector3d* vec2); // ������� ������� ���� ����� ���������
};
#endif
