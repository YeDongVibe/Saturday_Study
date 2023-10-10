def binary_search(arr, key):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2 # 중간값 계산 -> '//'은 나눈 값을 정수로 나타냄 

        if arr[mid] == key: # mid 값과 일치하면
            return mid # mid 출력
        elif arr[mid] < key: # mid 값보다 작으면
            low = mid + 1 # 오른쪽으로 이동
        else: # mid 값보다 크면
            high = mid - 1 # 왼쪽으로 이동

    return -1 # 찾는 값(key이 없으면 -1 반환

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  # 배열 생성 및 초기화
key = 8  # 찾을 값
index = binary_search(arr, key)  # 이진 탐색 함수 호출

if index != -1:
    print(f"{key}는 arr[{index}] 안에 있슴듕.")
else:
    print(f"{key}는 arr 안에 없다리고리고리.")
