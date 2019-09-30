#include <fstream>

int main() {
    int f, a = 1, b = 1, c;

    scanf("%d", &f);

    if (f <= 0) {
        printf("zjebałeś");
        return -1;
    }

    for (int i = 0; i < f; ++i) {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }
    
    return 0;
}