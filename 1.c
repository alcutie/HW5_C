#include <stdio.h>

int main() {
    // создаем переменную n (количество чисел в массиве)
    int n;
    // ввод числа n
    scanf("%i", &n);

    // создаем массив из n чисел
    int array[n];
    // с помощью цикла вводим его
    for (int i=0; i<n; i++) {
        scanf("%i", &array[i]);
    }

    // с помощью цикла проходимся по первой половине массива n/2
    for (int i=0; i<n/2; i++) {
        // заменяем элемент из первой половины на элемент из второй половины на той же позиции
        // (если считать от начала 2 половины)
        // создаем временную переменную k для замены элементов
        int k = array[i];
        array[i] = array[n/2 + i];
        array[n/2 + i] = k;
    }

    // выводим итоговый массив
    for (int i=0; i<n; i++) {
        printf("%i ", array[i]);
    }
    return 0;
}