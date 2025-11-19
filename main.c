#include <iostream>
using namespace std;


int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    if (y == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
    return static_cast<float>(x) / y;
}





int main(){
    int a;
    int b;
    int result;
    int choice;

    
    if (choice == 1) {
        result = add(a, b);
    } else if (choice == 2) {
        result = subtract(a, b);
    } else if (choice == 3) {
        result = multiply(a, b);
    } else if (choice == 4) {
        result = divide(a, b);
    } else {
        cout << "Неверный выбор!" << endl;
        return 0;
    }
}