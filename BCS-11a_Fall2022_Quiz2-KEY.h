void generateArray(int arr[], int N){
    int min=1,max=54, i;
    srand(time(NULL));
    for (i = 0; i < N; ++i) {
        arr[i] = (1+ rand()%max);
    }
}

/* Finds and returns the mininum of the array elements */
int findMin(int arr[], int N) {
    int min = arr[0], i;
    for (i = 0; i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

/* Finds and returns the maximum of the array elements */
int findMax(int arr[], int N) {
    int max = arr[0],i;
    for (i = 0; i <N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Compute the average and returns it 
float computeAverage(int arr[], int N) {
    float total = 0;
    int i;
    for (i = 0; i < N; i++) {
        total += arr[i];
    }
    return (total/N);
}