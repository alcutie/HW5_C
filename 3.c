#include <stdio.h>

// объявление структуры
struct Move
{
    int x;
    int y;
};

//создаем функцию, в которую подаем массив и количество элементов в массиве
struct Move getFinishPoint(struct Move arr[], int n) {
    // создаем структуру типа Move с нулевыми значениями
    struct Move result = {0, 0};
    // создаем цикл для перебора массива и структур
    for (int i=0; i<n; i++) {
        // к итоговой координате x прибавляем x из текущей структуры (то же самое с координатой y)
        result.x += arr[i].x;
        result.y += arr[i].y;
    }
    // возвращаем результат структуры
    return result;
}

// для проверки работы функции
int main() {
    struct Move moves[4] = {{2, -4}, {4, 4}, {-2, 2}, {-2, 4}}, result;
    result = getFinishPoint(moves, 4);
    printf("%i %i", result.x, result.y);
    return 0;
}