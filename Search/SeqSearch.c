# include <stdio.h> // 입출력 함수
# include <stdlib.h> // 난수생성, 문장려 형식을 다른 형식으로 변환 등 함수 

int Search(const int a[], int n, int key) //n개인 배열 a에서 key와 일치하는 값 검색
{
    int i = 0; //변수 생성 및 초기화
    while(1) {
        if (i == n) { // n개의 요소를 돌면서 key값이 존재하지 않으면 -1 return
            return -1;
        }
        if (a[i] == key) { //n개의 요소 중 key 값이 존재하면 i 리턴하고 넘어가기
            return i;
        }
        i++;
    }
}

int main()
{
    int nx, ky, idx; //변수 선언<nx : 배열 x의 갯수 / ky : 검색 값 / idx : 인덱스 > 
    int *x; // 포인터 선언 : 배열의 첫번째 요소를 가리킴.

    puts("선형검색"); // 문자열 출력 함수 : 콘솔에 출력 후 자동으로 줄바꿈 진행.
    puts("요소 개수 : ");
    scanf_s("%d", &nx); //scanf랑 같은 동작이지만, 데이터 길이를 확인해서 안전한 입력 처리를 함.즉 scanf의 발전된 형태 -GPT왈

    x = calloc(nx, sizeof(int)); // calloc : nx개 정수를 저장할 메모리 공간 할당 : 0으로 메모리 초기화 후 x가 시작주소에 할당됨.

    for (int i = 0; i <nx; i++) { //nx개의 정수를 입력 받아서 할당 됨.
        printf("x[%d] : ", i);
        scanf_s("%d", &x[i]); // 각 정수를 입력 받음 입력 받은 정수를 x 배열에 저장
    }

    printf("검색 값 : ");
    scanf_s("%d", &ky); //검색 값 입력 받아서 ky에 저장
    idx = Search(x, nx, ky); //Search 함수 호출

    if(idx == -1) { // -1 받으면(검색 값이 없으면)
        puts("검색 실패랍니다람쥐");
    }

    else { // i를 받으면(검색 성공 시)
        printf("%d는 x[%d]에 있슴듕.", ky, idx);
    }
    
    free(x); //할당된 메모리 해제 -> 프로그램 종료(메모리 정리)
    return 0;
}