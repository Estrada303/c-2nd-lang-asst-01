
#include <stdio.h>  // for printf

int main() {

    int myArray[10];

    int myArray_size = sizeof(myArray)/ sizeof(myArray[0]);

    for (int i = 0; i < myArray_size; i++){
        myArray[i] = i + 1;
    }

    char cstring[] = "I love doing this";

    int stringSize =  sizeof(cstring)/ sizeof(cstring[0]);

    int intary[] = {10,20,30,40,90};

    myArray[2]= 50;

    for (int i = 0; i < myArray_size; i++){
        printf("\n%d",myArray[i]);
    }

    int *ptr = myArray;
    ptr[3] = 10;


    printf("\n\nThe array has %d\nelements",myArray_size  );
    printf("\nthere are %d\n characters in the sentence",stringSize  );

    return 0;
}