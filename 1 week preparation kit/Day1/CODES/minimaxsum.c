void miniMaxSum(int arr_count, int* arr) {
    long long total_sum = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < arr_count; i++) {
        total_sum += arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    long long min_sum = total_sum - max;
    long long max_sum = total_sum - min;
    printf("%lld %lld\n", min_sum, max_sum);
}
