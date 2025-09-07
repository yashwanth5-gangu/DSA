class Solution {
    public int[] sumZero(int n) {
        int[] arr = new int[n];
        int j = 0;
        if (n % 2 == 1)
            arr[j++] = 0;
        for (int i = 1; i <= n / 2 && j<n; i++) {
            arr[j++] = i;

            arr[j++] = -i;

        }

        return arr;
    }
}