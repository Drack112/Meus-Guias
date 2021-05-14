package Basic.Repetição;

// Importando uma biblioteca e todas as ferramentas
import java.util.*;

public class megasena {
    
    // Definindo um parametro para uma função da lib
    static Random ran = new Random();
    public static void main(String[] args) {
        for(int i=0; i<10; i++){
            int x = ran.nextInt(60);
            System.out.println(x);
        } 
    }
}
