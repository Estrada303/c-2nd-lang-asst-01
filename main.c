#include <stdio.h>  // for printf

int * resize(int arr1[], int arr2[], int size){

    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
    return arr2;
}


int main() {


    int thisArray[] = {0,1,2,3,4,5,6,7,8,9};
    int newArray[20];



    int size_array = sizeof(thisArray)/sizeof(thisArray[0]);
    printf("\nthis array has %d elements\n", size_array);
    for (int i = 0; i < size_array; i++){
        printf("%d \n",thisArray[i]);
    }


    resize(thisArray,newArray, size_array);
    size_array = sizeof(newArray)/sizeof(newArray[0]);

    for (int i = 10; i < size_array;i++){
        newArray[i] = i ;
    }


    printf("\nthe new array has %d elements\n", size_array);
    for (int i = 0; i < size_array; i++) {
        printf("%d \n", newArray[i]);
    }




    return 0;
}