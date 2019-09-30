#include <fstream>

int main() {
    int a = 1;
    for (int i = 2; i < 100; i = i + 1) {
        printf("%d " ,a);
        a = a * i;
    }

    return 0;
}