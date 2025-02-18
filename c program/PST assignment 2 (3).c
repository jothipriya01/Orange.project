#include <stdio.h>
int main()
{
    int A,B,C,D;
    A=(10&&8);
    B=(0&&8);
    C=(0&&0);
    D=(8&&0);
    printf("result of A=%d\n",A);
    printf("result of B=%d\n",B);
    printf("result of C=%d\n",C);
    printf("result of D=%d\n",D);
    return 0;
}
