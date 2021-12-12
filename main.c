#include <stdio.h>
#include <math.h>

void summa(int n2, int n3){
    int s1, s2;
    float y;
    int j;
    s1=0;
    s2=0;
    for(j=3;j<=n2; j++) {
        s1 = s1 + (3 * pow(j, 3) + j * j + 1);
    }
    for(j=2;j<=n3; j++){
        s2 = s2 + (2*pow(j,3)+2);
    }
    y = (float)(1 + 2 * s1)/(2+s2);
    printf("y=%6.3f", y);
}



int main() {
    int n, m;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    summa(n, m);

    return 0;
}
