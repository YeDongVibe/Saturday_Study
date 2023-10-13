import time

def binary_search(arr, key):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2  # 중간값 계산

        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            low = mid + 1
        else:
            high = mid - 1

    return -1

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
key = 8
start_time = time.time()  # 시작 시간 기록
index = binary_search(arr, key)
end_time = time.time()  # 종료 시간 기록

if index != -1:
    print(f"{key}는 arr[{index}] 안에 있슴듕.")
else:
    print(f"{key}는 arr 안에 없다리고리고.")

execution_time = end_time - start_time
print(f"프로그램 실행 시간: {execution_time} 초")
