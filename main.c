#include <stdio.h>  // for printf

struct cars_owned {
    int year;
    char make[15];
    char model[15];
    char status[15];
};


int main() {

    struct cars_owned first_car = {1989, "nissan", "sentra", "sold"};
    struct cars_owned second_car = {2000, "ford", "mustang", "totaled"};
    struct cars_owned third_car = {2002, "kia", "spectra", "totaled"};

    struct cars_owned *car1_pointer = &first_car;
    struct cars_owned *car2_pointer = &second_car;
    struct cars_owned *car3_pointer = &third_car;

    printf("\nYear: %d\nMake: %s\nModel: %s\nStatus: %s\n",
            car1_pointer->year,
            car1_pointer->make,
            car1_pointer->model,
            car1_pointer->status);

    printf("\nYear: %d\nMake: %s\nModel: %s\nStatus: %s\n",
            car2_pointer->year,
            car2_pointer->make,
            car2_pointer->model,
            car2_pointer->status);

    printf("\nYear: %d\nMake: %s\nModel: %s\nStatus: %s\n",
            car3_pointer->year,
            car3_pointer->make,
            car3_pointer->model,
            car3_pointer->status);

    return 0;
}