#include <stdio.h>
#include <stdlib.h>

int factorial(int a)
{
    int i;
    int res = 1;    //누적으로 하는 건 초기화가 중요, 곱이니까 1로 초기화
    for(i=0; i<a; i++)
    {
        res = res * (i+1);  //0부터 곱해지는 걸 방지 
    }

    return res;
}

int combination(int n, int r)
{
    int up, down;

    //분자 계산 : up에 저장
    up = factorial(n);

    //분모 계산: down에 저장
    down = factorial(n-r) * factorial(r);

    return(up/down);
}

int main (void)
{
    //변수 선언
    int result;
    int n, r;

    //입력 받기
    printf("input n : ");
    scanf("%i", &n);

    printf("input r : ");
    scanf("%i", &r);

    //combination 계산
    result = combination(n, r); //함수 호출

    //결과 출력
    printf("The combination result is %i\n", result);
    
    return 0;
}
