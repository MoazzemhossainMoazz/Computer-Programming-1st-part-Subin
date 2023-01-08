#include<stdio.h>
int main()
{
    int i;
    int total_marks[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int marks_count[101];

    for(i =0; i<10; i++)
    {
        marks_count[i] =0;
    }

    for(i=0; i<10; i++)
        marks_count[total_marks[i]]++;
    for(i=50; i<=100; i++){
        printf("Marks: %d count: %d\n", i, marks_count[i]);

    }
    return 0;
}
