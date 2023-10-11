// 첫번째 값이랑 두번째 값을 서로 바꿔주기만 하면 바꿔줄 M번만큼 교환이 된다.
package AL_Strudy.Array;

import java.util.Scanner;

public class ball_change {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); // 바구니 수
        int arr[] = new int[N]; // 바구니 수 배열
        int M = sc.nextInt(); // 교환 수
        int temp = 0; //공 바꿔줄 임시저장소

        for (int i = 0; i < arr.length; i++) {
            arr[i] = i+1;
        }
        for (int j = 0; j < M; j++) {
            int I = sc.nextInt(); //첫번째 바구니 입력
            int J = sc.nextInt(); //두번째 바구니 입력

            temp = arr[I-1]; //첫번째 바구니 값
            arr[I-1] = arr[J-1]; // 첫번째 바구니에 두번쨰 값 저장
            arr[J-1] = temp; //두번째 바구니에 temp값 저장
        }
        for(int k = 0; k <arr.length; k++) {
            System.out.print(arr[k] + " ");
        }
        sc.close();
    }
}