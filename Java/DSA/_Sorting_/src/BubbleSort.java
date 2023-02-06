public class BubbleSort extends Utility {
    void bubble(int[] array, int length) {
        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (array[j] > array[j + 1])
                    swap(array, j, j + 1);
            }
        }
    }

    public static void main(String[] args) {
        BubbleSort bs = new BubbleSort();
        bs.bubble(bs.array, 10);
        bs.printArray(bs.array, 10);
    }
}