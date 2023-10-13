#include <stdio.h>
#include <malloc.h>

#define MAX_SIZE 11//지시문 : 상수, 함수 등 코드 기본 요소 정의
#define INDEX_SIZE 10

int n = 9; //검색할 값

int arr[MAX_SIZE] = {3, 9, 15, 22, 31, 55, 67, 88, 91}; //배열 선언 및 초기화

typedef struct //typedef : 새로운 데이터 타입을 정의하는 것,
{
    /*C언어에서 구조체 데이터 타입을 선언할 때 구조체 이름과 필드를 함께 선언 가능.*/
    /*즉. struct라는 구조체의 타입의 별칭이 itable임*/
    int key; //검색 키
    int index; // arr의 시작점 나타내는 index
}ITABLE, *LPITABLE; // struct를 새로운 타입인 itable로 선언


ITABLE index_arr[INDEX_SIZE] = {
    {3, 0},
    {15, 3},
    {87, 6}
};

int seq_search(int key, int low, int high) {
    for(int i = low; i <= high; i++) {
        if(arr[i] == key) {
            return i; //탐색 성공 시 i(키값의 인덱스 )리턴
        }
    }
    return -1; //실패하면 -1 반환
}

int index_search(int key) {
    int low, high;

    LPITABLE lpTable = (LPITABLE)malloc(sizeof(ITABLE)*10);// 동적할당


    if(key<arr[0] || key > arr[n-1]) { // 키 값이 배열 내의 범위 값이 아니면 종료~
        return -1;
    }

    for (int i = 0; i < INDEX_SIZE; i++) {
        if(index_arr[i].key<= key && index_arr[i+1].key > key) {
            break;
        }
        if(i == INDEX_SIZE) {
            low = index_arr[i-1].index;
            high = n;
        }
        else {
            low = index_arr[i].index;
            high = index_arr[i-1].index;
        }
        return seq_search(key, low, high);
    }
};