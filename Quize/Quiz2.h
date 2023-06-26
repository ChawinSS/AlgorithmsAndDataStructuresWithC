// Printing function
void show_array(int numbers[]){
    printf("\n");
    for (int z = 0; z<ARRAY_LENGTH; z++){
        printf("%d ",numbers[z]);
    }
    printf("\n");
}

void min(int numbers[]){
    printf("\n");
    int indicator=50;
    for(int i=0;i<ARRAY_LENGTH;i++){
    if(numbers[i]<indicator)
    indicator=numbers[i]; //-1vs. 40=>indicator became 40 //40vs. 49=>incator became 49 //return 49
    }

    printf("Minumum: %d\n",indicator);
}

void max(int numbers[]){
    printf("\n");
    int indicator=-1;
    for(int i=0;i<ARRAY_LENGTH;i++){
    if(numbers[i]>indicator)
    indicator=numbers[i]; //-1vs. 40=>indicator became 40 //40vs. 49=>incator became 49 //return 49
    }

    printf("Maximum :%d\n",indicator);
}

void avg(int numbers[]){
  int result;
    printf("\n");
        for(int i=0;i<ARRAY_LENGTH;i++){
        result+=numbers[i];  
        }
  result=result/ARRAY_LENGTH;
    printf("Average: %d\n",result);

}

// Filling up the array with random
int *start_Random(int *n){
    srand(time(NULL));
    for (int i = 0; i < ARRAY_LENGTH; i++){
        n[i] = (1+ rand()%RANDOM_MAX);
    }
    return n;

}