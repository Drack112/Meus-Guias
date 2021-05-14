package Basic.Casting;

import java.util.Scanner;

public class casting {
    public static void main(String[] args) {
        // converter tipos primitivos

        Scanner scanner = new Scanner(System.in);
        int z = (int) scanner.nextDouble();

        System.out.println(z);
    }
}
