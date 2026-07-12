
#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}
int main(void)
{
    unsigned long checksum;
    clock_t start, end;
    double total, build_data, process, reduce;

    
    start = clock();
    build_dataset();
    end = clock();
    build_data = ((double)(end - start)) / CLOCKS_PER_SEC;

    
    start = clock();
    process_dataset();
    end = clock();
    process = ((double)(end - start)) / CLOCKS_PER_SEC;

    
    start = clock();
    checksum = reduce_checksum();
    end = clock();
    reduce = ((double)(end - start)) / CLOCKS_PER_SEC;

    
    total = build_data + process + reduce;

    if (checksum == 0ul)
        printf("impossible\n");

    
    printf("TOTAL seconds: %.6f\n", total);
    printf("BUILD_DATA seconds: %.6f\n", build_data);
    printf("PROCESS seconds: %.6f\n", process);
    printf("REDUCE seconds: %.6f\n", reduce);

    return 0;
}
