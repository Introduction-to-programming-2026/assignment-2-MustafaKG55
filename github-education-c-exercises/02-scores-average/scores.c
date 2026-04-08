#include <cs50.h>
#include <stdio.h>

// TODO: change N if you want more inputs
const int N = 3;

// Function prototype
float average(int length, int array[]);

int  main(void)
{
    int scores[N];

    // Ask user for N scores
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int( "Score: ");
    }

    // Print average
    printf("Average: %.2f\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float) sum / length;
}
