package Basic.ManipularStrings;

public class index {
    public static void main(String[] args) {
        String x = "Olá mundo!";
        System.out.println(x.length()); // Exibir caracteres
        System.out.println(x + " concatenada"); // Colocar a palavra na string
        System.out.println(x.contains("mundo")); // Tem mundo na string?
        System.out.println(x.indexOf("mundo")); // Contar os caracteres
        System.out.println(x.lastIndexOf("mundo")); // Saber onde está o mundo
        System.out.println(x.toUpperCase()); // TUDO EM MAIÚSCULO
        System.out.println(x.toLowerCase()); // tudo em minusculo
        System.out.println(x.trim()); // Remover os espaços
        System.out.println(x.substring(9)); // Começar da posição 9
        System.out.println(x.equals("Olá")); // Procurar a palavra Olá
    }
}
