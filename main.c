//
// Created by Ivo Georgiev on 2019-02-19.
//

#include <stdio.h>  // for printf

float avg = 0.0;
float *pAvg = &avg;

void change_grades(int *first, int *second, int *third){

        *first = 95;
        *second = 90;
        *third = 75;

}

float avg_grades(int a, int b, int c){
    float avg = (float) (a+b+c)/3;
    return avg;
}

int main() {

    int grade1 = 89;
    int *pGrade1 = &grade1;

    int grade2 = 95;
    int *pGrade2 = &grade1;

    int grade3 = 99;
    int *pGrade3 = &grade1;

    char *a = "a";
    char *b = "b";
    char *c = "c";

    printf( "%d\n%d\n%d\n\n",grade1,grade2,grade3);

    change_grades(pGrade1,pGrade2,pGrade3);

    printf( "%d\n%d\n%d\n\n",grade1,grade2,grade3);

    *pAvg = avg_grades(grade1, grade2, grade3);

    printf("%.2f is your average\n", avg);

    return 0;
}