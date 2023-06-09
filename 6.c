#include <stdio.h>

void main() {
    // Создаем переменную "num":
    int num;
    // Вводим число, которое отвечает за кол-во элементов в массиве:
    scanf("%d", &num);
    // Создаем массив, длина которого зависит от значения переменной "num":  
    int digits[num], count = 0;
    // Создаем условие, которое проверяет кол-во элементов в массиве по условию задачи:
    if (num >= 1 && num <= 10000)
    {
        // Создаем цикл ввода чисел для подсчета:
        while (num > 0)
        {
            // Вводим числа:
            scanf("%d", &digits[--num]);
            // Создаем условие, которое проверяет каждый элемент массива на положительность и добавляет к переменной "count" 1:
            if (digits[num] > 0) count++;
        }
        // В ответ выводим значение переменной "count":
        printf("%d", count);
    }
    // Если длина массива не соответствует требованиям - выводим предупреждающее сообщение:
    else
        printf("Массив не соответствует требованиям");
}