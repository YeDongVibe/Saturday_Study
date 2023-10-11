package AL_Strudy.Array;

import java.util.Scanner;

public class basket {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); //바구니 개수
        int M = sc.nextInt(); //바구니 바꿀 수

        int arr [] = new int [N];
        for(int i = 0; i < N; i++) {
            arr[i] = i+1;
        }
        for(int i = 0; i < M; i++)  {
            int I = sc.nextInt();
            int J = sc.nextInt();

            for(int j = I; j < J; j++) {
                int rn = J--;

                int temp = arr[j];
                arr[j] = arr[rn];
                arr[rn] = temp;
            }
        }
        for(int k = 0; k <arr.length; k++) {
            System.out.print(arr[k] + " ");
        }

        sc.close();
    }
}
