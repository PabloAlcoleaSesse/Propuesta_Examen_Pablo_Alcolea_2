#include <iostream>

void triple() {
    for(int a = 1; a <= 17; a++) {
        for(int b = a; b <= 17; b++) {
            int c = (int)sqrt(a * a + b * b);
            if(c*c == a*a + b*b && a + b> c && a + c > b && b + c > a && c <= 17) {
                printf("Es un triple pitagorico: %d, %d, %d \n", a, b, c);
            }
        }
    }

}