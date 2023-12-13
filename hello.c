#include <stdio.h>

int main (void)
{
    printf("데이터의 주소값 = 포인터 변수\n\n");
    
    int n = 100; // n 변수 선언 및 초기화

    int *p;  // 포인터의 선언 

    p = &n;  // 포인터의 초기화
    
    printf("n의 주소 : %p\n", &n);
    printf("포인터 변수의 값 : %p\n\n", p);

    printf("*p의 값 : %d\n", *p);
       
    return 0;
}