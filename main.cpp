#include <iostream>

void result (int a[]) {
      for (int j = 0; j < 10; j++) {
        for (int l = 0, i = 1; l < 9; l++, i++) {
            int* f_pb = a + l;
            int* s_pb = a + i;
            if (*f_pb < *s_pb) {
                int tempo = *f_pb;
                *f_pb = *s_pb;
                *s_pb = tempo;
            }
            else {
                break;
            }
        }
    }
}

int main() {
    int arr [10] {0,1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    result(arr);
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
