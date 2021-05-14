package Test;

import java.util.Scanner;

public class senha {
    public static void main(String[] args) {
        String password = "123456";
        System.out.println("Digite a senha : ");

        Scanner scanner = new Scanner(System.in);
        String pass = scanner.nextLine();

        // == não compara o conteudo
        // ele compara a referencia do objeto
        System.out.println(password.equals(pass));
    }
}
