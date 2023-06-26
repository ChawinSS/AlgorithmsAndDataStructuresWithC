//Printing function
void show_array(int numbers[]){
    printf("\n");
    for (int z = 0; z<6; z++){
        printf("%d ",numbers[z]);
    }
    printf("\n");
}

// Filling up the array with random
int *start_Random(int *n){
    srand(time(NULL));
    for (int i = 0; i < ARRAY_LENGTH; i++){
        n[i] = (1+ rand()%RANDOM_MAX);
    }
    return n;

}
//Sorting the array in ascending order
int *Storting(int *numbers){
    int temp;
    for (int a = 0; a < 6; a++){
        for (int b = 0; b < 6; b++){
            if (numbers[a] < numbers[b]){
                temp = numbers[b];
                numbers[b] = numbers[a];
                numbers[a] = temp;
            }

        }
    }

    return numbers;    

}