#include<stdio.h>
int main()
{
    int ara[] = {1,2,3,5,9,11,13,14,16,18,17,21,25,38,39,36,85,95};

    int low_indx = 0;
    int high_indx = 17;
    int mid_indx;
    int num = 13;

    while(low_indx <= high_indx){
        mid_indx = (low_indx + high_indx) / 2;
        if(num == ara[mid_indx]){
            break;
        }
        if(num<ara[mid_indx])
            high_indx = mid_indx - 1;
        else
            low_indx = mid_indx + 1;
    }
    if(low_indx > high_indx)
        printf("%d is not in the array\n", num);
    else
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);
    return 0;
}

/*int b_search(int ara, int low, int high)
{
    while (low <= high){
        mid = (low + high) /2;
        if(num == ara[mid]){
            break;
        }
        if(num<ara[mid]){
            high = mid + 1;
        }
        else
            low = mid + 1;
    }
    if(low > high)
        return
    else
        printf("possible");
    return
}*/
