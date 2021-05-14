package POO.contrusctor;

public class multiple_constructor {
    // Setar dois objetos
    int modelYear;
    String modelName;

    public multiple_constructor(int year, String name) {
        // PAssar o parâmetro dos dois objetos
        modelYear = year;
        modelName = name;
    }

    public static void main(String[] args) {
        // Setar e exibir os valores nos objetos
        multiple_constructor myCar = new multiple_constructor(1969, "Mustang");
        System.out.println(myCar.modelYear + " " + myCar.modelName);
    }
}
