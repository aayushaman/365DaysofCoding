import java.util.PriorityQueue;

public class Solution {

    public static int kthSmallest(int[] arr, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for (int i = 0; i < arr.length; i++) {
            minHeap.add(arr[i]);
        }

        for (int i = 0; i < k - 1; i++) {
            minHeap.poll();
        }

        return minHeap.poll();
    }

    public static void main(String[] args) {
        int[] arr = {7, 10, 4, 3, 20, 15};
        int k = 4;

        System.out.println(kthSmallest(arr, k));
    }
}
