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
