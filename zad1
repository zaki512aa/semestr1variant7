#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void findminmax(const vector<int>& arr);
void swapminmax(vector<int>& arr);
void uniqelements(const vector<int>& arr);

int main() {
    int n;
    cout << "vvedite kolichestvo elementov: ";
    cin >> n;

    vector<int> arr(n);
    cout << "vvedite " << n << " elementov: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "ishodny massiv: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findminmax(arr);     //
    swapminmax(arr);  // вызываем 3 функции
    uniqelements(arr);   //

    return 0;
}

void findminmax(const vector<int>& arr) {
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    cout << "maksimalny element: " << arr[max_index] << " (index: " << max_index << ")" << endl;
    cout << "minimalny element: " << arr[min_index] << " (index: " << min_index << ")" << endl;
}

void swapminmax(vector<int>& arr) {
    vector<int> original = arr;

    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    swap(arr[max_index], arr[min_index]);

    cout << "posle perestanovki: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void uniqelements(const vector<int>& arr) {
    map<int, int> frequency;

    for (int i = 0; i < arr.size(); i++) {
        frequency[arr[i]]++;
    }

    cout << "kolichestvo razlichnyh elementov: " << frequency.size() << endl;
    cout << "chastota elementov:" << endl;

    for (auto& element : frequency) {
        cout << "   " << element.first << " - " << element.second << " raz" << endl;
    }
}
