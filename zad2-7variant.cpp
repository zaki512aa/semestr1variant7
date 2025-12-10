#include <iostream>
using namespace std;

int main() {                                   // ввод размера массива
    int n;
    cout << "vvedite kolichestvo elementov: ";
    cin >> n;

    int arr[n];                                // объявление массива
    cout << "vvedite " << n << " elementov: ";
    for (int i = 0; i < n; i++) {              // цикл для ввода элементов массива
        cin >> arr[i];
    }

    cout << "ishodny massiv: ";
    for (int i = 0; i < n; i++) {               // i = 0 - начинаем с первого элемента
                                                // i < n - продолжаем пока не дойдем до последнего элемента
                                                // i++   - переход к следующему элементу
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxindex = 0;                           // предполагаем что первый элемент максимальный
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxindex]) {           // перебор элементов для нахождения максимума
            maxindex = i;                       // обновляем индекс макс элемента, если текущий больше
        }
    }
    cout << "1) nomer maksimalnogo elementa: " << maxindex + 1 << endl;

    int firstzero = -1;                         //переменные для хранения индексов нулевых элементов, -1 - не найден
    int secondzero = -1;

    for (int i = 0; i < n; i++) {               // цикл для поиска первого нулевого элемента в массиве
        if (arr[i] == 0) {
            firstzero = i;
            break;
        }
    }

    if (firstzero != -1) {                        // проверка на наличие первого нулевого элемента
        for (int i = firstzero + 1; i < n; i++) { // если первый найден, запускаем цикл нахождения второго
            if (arr[i] == 0) {
                secondzero = i;
                break;
            }
        }
    }

    if (firstzero != -1 && secondzero != -1) {             // проверка на наличие обоих нулевых элементов
        int product = 1;                                   // переменная для произведения
        for (int i = firstzero + 1; i < secondzero; i++) { // цикл для перемножения между элементами
            product *= arr[i];                             //
        }
        cout << "2) proizvedenie mezhdu nulyami: " << product << endl;
    } else {
        cout << "2) v massive menshe dvuh nulevyh elementov" << endl;
    }

    int newarr[n];                              // массив для преобразованных данных
    int index = 0;                              // отслеживание позиции в новом массиве

    for (int i = 0; i < n; i += 2) {            // цикл для копирования нечет элементов
        newarr[index] = arr[i];                 // копирование элементов из исходника в новый
        index++;
    }

    for (int i = 1; i < n; i += 2) {            // цикл для копирования чет элементов
        newarr[index] = arr[i];
        index++;
    }

    cout << "3) preobrazovanny massiv: ";
    for (int i = 0; i < n; i++) {               // цикл для вывода всех элементов нового массива
        cout << newarr[i] << " ";
    }
    cout << endl;

    return 0;
}
