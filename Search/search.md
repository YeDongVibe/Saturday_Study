---
marp: true
---

# **SEARCH_AL**

## 검색 알고리즘

**검색 알고리즘**
- **정렬되지 않은 리스트**:
    - 선형 검색 (Linear Search)

- **정렬된 리스트**:
    - 이진 검색 (Binary Search)


---

## 선형 검색 (Linear Search)

선형 검색은 일렬로 된 자료를 왼쪽부터 오른쪽으로 차례대로 검색하는 알고리즘.

**장점**:
- 검색 알고리즘의 기본이기에 구현이 용이.
- 데이터의 정렬 여부와 상관 없이 동작 가능.
- 정렬되지 않은 리스트에서도 사용 가능.

**단점**:
- 배열의 크기가 커질수록 시간이 오래 걸림.


```C
// 예시 코드 (C)
// 선형 검색 알고리즘 구현
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
```
```C
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
```
---

## 이진 검색 (Binary Search)

이진 검색은 데이터의 가운데에 있는 항목을 키값과 비교하여 다음 검색 위치를 결정하여 탐색하는 알고리즘입니다. 이 알고리즘은 배열에서만 구현 가능하며, 정렬되어 있어야만 동작합니다.

**장점**:
- 빠른 검색 속도를 제공합니다.

**단점**:
- 배열에서만 구현 가능하며, 정렬되어 있어야만 동작합니다.
```py
# 예시 코드 (python)
# 이진 검색 알고리즘 구현
import time

def binary_search(arr, key):
    low = 0
    high = len(arr) - 1 # 배열의 마지막 인덱스

    while low <= high:
        mid = (low + high) // 2  # 중간값 계산

        if arr[mid] == key:
            return mid # 키를 찾았을 때 인덱스 반환
        elif arr[mid] < key:
            low = mid + 1 # 중간 값보다 키가 큰 경우, 오른쪽 반을 탐색
        else:
            high = mid - 1 # 중간 값보다 키가 작은 경우, 왼쪽 반을 탐색

    return -1

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
key = 8  # 찾을 값
index = binary_search(arr, key)

if index != -1:
    print(f"{key}는 arr[{index}] 안에 있슴듕.")
else:
    print(f"{key}는 arr 안에 없다리고리고.")
```
```py
def binary_search(arr, key):
    start = 0
    end = len(arr) - 1

    while start <= end:
        mid = (start + end) // 2 # 중간값 계산 -> '//'은 나눈 값을 정수로 나타냄 

        if arr[mid] == key: # mid 값과 일치하면
            return mid # mid 출력
        elif arr[mid] < key: # mid 값보다 작으면
            start = mid + 1 # 오른쪽으로 이동
        else: # mid 값보다 크면
            end = mid - 1 # 왼쪽으로 이동

    return -1

def main():
    print("이진 탐색")
    nx = int(input("요소 개수: ")) # 요소 개수 입력
    x = [int(input(f"x[{i}]: ")) for i in range(nx)] # nx 개만큼 요솟값 입력
    
    x.sort()  # 이진 탐색을 위해 배열 정렬.

    ky = int(input("검색 값: ")) # 검색 값 입력
    idx = binary_search(x, ky) # binary_search 호츌

    if idx == -1:
        print("검색 실패랍니다람쥐")
    else:
        print(f"{ky}는 x[{idx}]에 있슴듕.")

if __name__ == "__main__":
    main()

```
---

