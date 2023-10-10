#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //배열 생성 및 초기화
    int key = 8; //찾을 값
    int index; //변수 선언 및 초기화

    for(int i = 0; i < 10; i++) { 
        if (key == arr[i]) { //key 값이 arr 배열 내에 있으면
            index = i; //index를 i값으로 업데이트
        }
    }
    printf("%d는 arr[%d]안에 있슴듕.\n", key, index); //출력

    return 0; //프로그램 종료
}