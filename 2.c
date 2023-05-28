#include <stdio.h>

// объявление структуры
struct Person
{
    int age; // возраст
    char name[30]; // имя
};

// создаем функцию, в которую подаем массив и количество элементов в массиве
float averageAge(struct Person arr[], int n) {
    // создаем переменную для суммы всех возрастов
    float sum = 0;
    // создаем цикл для прохождения по массиву
    for (int i=0; i<n; i++) {
        // к сумме прибавляем текущий возраст
        sum += arr[i].age;
    }
    // возвращаем среднее арифметическое
    return sum / n;
}

// для проверки работы функции
int main() {
    struct Person people[3] = {{12, "Vlad"}, {44, "Misha"}, {76, "Pasha"}};
    float result = averageAge(people, 3);
    printf("%f", result);
    return 0;
}
