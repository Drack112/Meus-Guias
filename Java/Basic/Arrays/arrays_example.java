package Basic.Arrays;

public class arrays_example {
    public static void main(String[] args) {
        // Ja declara que a string é array
        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        // Gerar valores de 0 a 3
        int x = (int)(Math.random() * 4);
        System.out.println(cars[x]);
    }
}
