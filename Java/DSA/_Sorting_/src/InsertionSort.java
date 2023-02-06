public class InsertionSort extends Utility {
    void insertion(int[] array, int length) {
        int key;
        for (int i = 0; i < length; i++) {
            key = array[i];
            int j = i - 1;
            while (j >= 0 && key < array[j]) {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        InsertionSort is = new InsertionSort();
        is.insertion(is.array, 10);
        is.printArray(is.array, 10);
    }
}