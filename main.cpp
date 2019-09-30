#include <fstream>

int main() {
    int input;
    int a = 1;
    scanf("%d", &input);

    for (int i = 1; i <= input; ++i) {
        a = a * i ;
    }

    printf("%d\n", a);
    return 0;
}