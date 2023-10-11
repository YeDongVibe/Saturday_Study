package AL_Strudy.Array;

import java.util.Scanner;

public class remain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10];
        int cnt = 0;

        for (int i = 0; i < 10; i++) {
            int num = sc.nextInt(); // 10개의 정수 입력
            arr[i] = num % 42;
        }

        // 중복 값 찾기
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    cnt++;
                    break; // 중복을 한 번 센 후에는 더 이상 세지 않음
                }
            }
        }

        // 서로 다른 나머지 값 개수
        System.out.println(10 - cnt);

        sc.close();
    }
}
