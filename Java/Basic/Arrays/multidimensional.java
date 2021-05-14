package Basic.Arrays;

public class multidimensional {

    // Mostrar todos os valores das arrays
    public static void main(String[] args) {
      // Multidimensionais
        int[][] myNumbers = { {1, 2, 3, 4}, {5, 6, 7} };
        //Repetir a array
        for (int i = 0; i < myNumbers.length; ++i) {
          //Repetir a array de novo mas com o numero de valores
          for(int j = 0; j < myNumbers[i].length; ++j) {
            System.out.println(myNumbers[i][j]);
          }
        }
    }
}
