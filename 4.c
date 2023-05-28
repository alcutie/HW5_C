#include <stdio.h>

// создаем функцию для сокращения дроби
void reduce_fraction(int * a, int * b) {
    // создаем переменные (копируем a и b чтобы не изменять исходные значения)
    int a_nod = *a, b_nod = *b;
    // для нахождения нод используем алгоритм Евклида
    while (a_nod != b_nod) {
        if (a_nod > b_nod) {
            a_nod = a_nod - b_nod;
        }
        else {
            b_nod = b_nod - a_nod;
        }
    }
    // сокращаем изначальные значения a и b на нод с помощью указателей
    *a = *a / a_nod;
    *b = *b / a_nod;
}

// для проверки работы функции
int main() {
    int a = 3, b = 6;
    reduce_fraction(&a, &b);
    printf("%i %i", a, b);
    return 0;
}
