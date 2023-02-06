public class Utility {
    protected int[] array = {1, 2, 3, 0, 9, 8, 7, 6, 5, 4};

    void swap(int array[], int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }

    void printArray(int[] array, int length) {
        for (int i = 0; i < length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}