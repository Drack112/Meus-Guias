package Basic.Args;

public class args_parse {
    public static void main(String[] args) {
        // Converter String pra Int
        // java args_parse 12 35
        double n1 = Integer.parseInt(args[0]);
        double n2 = Integer.parseInt(args[1]);

        // --> 47
        System.out.println(n1 + n2);
    }
}
