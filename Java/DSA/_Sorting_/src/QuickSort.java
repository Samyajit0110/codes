public class QuickSort extends Utility {
    int partition(int[] array, int low, int high) {
        int pivot = array[low];
        int i = low, j = high;
        while (i < j) {
            do {
                i++;
            } while (array[i] < pivot);
            do {
                j--;
            } while (array[j] >= pivot);
            if (i < j) {
                swap(array, i, j);
            }
        }
        swap(array, pivot, j);
        return j;
    }

    void quickSort(int[] array, int low, int high) {
        if (low < high) {
            int _partition = partition(array, low, high);
            quickSort(array, low, _partition);
            quickSort(array, _partition + 1, high);
        }
    }

    public static void main(String[] args) {
        QuickSort qs = new QuickSort();
        int[] array = {1, 2, 3, 0, 9, 8, 7, 6, 5, 4, 999};
        qs.quickSort(qs.array, 0, 10);
        qs.printArray(qs.array, 11);
    }
}