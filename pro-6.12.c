#include<stdio.h>
int main()
{
    int i, marks, count;
    int total_marks[] = {66, 67, 77, 87, 66, 55, 87, 45, 68, 66};
    for(marks = 50; marks<=100; marks++)
    {
        count = 0;

            for(i=0; i<=10; i++){
                if(total_marks[i] == marks)
            {
                count++;
            }
            }
        printf("Marks: %d Count: %d\n", marks, count);

    }
    return 0;
}
