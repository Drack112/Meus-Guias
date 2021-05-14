package Basic.Arrays;

public class change_value {
    public static void main(String[] args) {
        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        cars[0] = "Opel";
        // Repetir a array com alteração no valor 0
        for (int x = 0; x<cars.length; x++){
            System.out.print(cars[x] + "\n");
        }
    }
}
