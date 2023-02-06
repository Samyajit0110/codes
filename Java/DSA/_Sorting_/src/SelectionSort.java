public class SelectionSort {
    void printArray(int[] array, int length) {
        for (int i = 0; i < length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    void Selection(int[] array, int length) {
        int minIndex = array[0], temp;
        for (int i = 0; i < length - 1; i++) {
            minIndex = i;
            for (int j = i + 1; j < length; j++) {
                if (array[j] < array[minIndex]) {
                    temp = array[j];
                    array[j] = array[minIndex];
                    array[minIndex] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 0, 9, 8, 7, 6, 5, 4};
        int length = 10;
        SelectionSort ss = new SelectionSort();
        ss.Selection(array, length);
        ss.printArray(array, length);
    }
}