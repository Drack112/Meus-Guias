package Basic.Scanner;

import java.util.Scanner;

public class scanner {
    public static void main(String[] args) {
        // Importar o pacote
        Scanner scanner = new Scanner(System.in);
        
        // Método pra você interagir
        System.out.println("Digite seu nome: ");

        // Pegar o valor acima
        String name = scanner.nextLine();

        // Imprimir
        System.out.println("Olá, " + name);
    }
}
