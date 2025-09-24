/*
COP3223 Spring 2023 Assignment 3_1
Copyright 2023 Silva, Sthefanny
*/
#include <stdio.h>

//shortcuts for frequently used code
#define FIRST_CLASS 1
#define ECONOMY 2
#define NUM_SEATS 6

int main() {

    //Variables
    int seats[NUM_SEATS] = {0};
    int section, seat_num;
    int is_boarded = 0;

    //Prompt
    while (!is_boarded) {
        printf("Please type 1 for \"first class\"\n");
        printf("Please type 2 for \"economy\"\n");
        scanf("%d", &section);

    //First Class
        if (section == FIRST_CLASS) {
            // assign first class seat
            int x;

    //Work
            for (x = 0; x < 3; x++) {
                if (seats[x] == 0) {
                    seats[x] = 1;
                    seat_num = x + 1;

    //Result
                    printf("Your seat is assigned to first class seat %d\n", seat_num);
                    break;
                }
            }

            if (x == 3) {
                // first class is full, ask if they want economy
                printf("First class is full. Do you want a seat in economy? (1 for Yes, 0 for No)\n");
                int choice;
                scanf("%d", &choice);
                if (choice == 1) {
                    section = ECONOMY;
                } else {

    //Result
                    printf("Next flight leaves in 3 hours.\n");
                }
            }
        }
    
    //Economy Class
        if (section == ECONOMY) {
            // assign economy seat
            int x;

    //Work
            for (x = 3; x < 6; x++) {
                if (seats[x] == 0) {
                    seats[x] = 1;
                    seat_num = x + 1;

    //Result
                    printf("Your seat is assigned to economy seat %d\n", seat_num);
                    break;
                }
            }

    //When Section is full
            if (x == 6) {
                // economy is full, ask if they want first class
                printf("Economy is full. Do you want a seat in first class? (1 for Yes, 0 for No)\n");
                int choice;
                scanf("%d", &choice);
                if (choice == 1) {
                    section = FIRST_CLASS;

    //Work
                    // search for a first class seat
                    for (x = 0; x < 3; x++) {
                        if (seats[x] == 0) {
                            seats[x] = 1;
                            seat_num = x + 1;

    //Result
                            printf("Your seat is assigned to first class seat %d\n", seat_num);
                            break;
                        }
                    }

    //Results
                    if (x == 3) {
                        printf("First class is full. Next flight leaves in 3 hours.\n");
                    }
                } else {
                    printf("Next flight leaves in 3 hours.\n");
                }
            }
        }

    //Work
        // check if everyone is boarded
        int is_full = 1;
        int x;
        for (x = 0; x < NUM_SEATS; x++) {
            if (seats[x] == 0) {
                is_full = 0;
                break;
            }
        }

    //Results
        if (is_full) {
            printf("The plane is fully boarded.\n");
            is_boarded = 1;
        } else {
            printf("Does everyone boarded? (1 for Yes, 0 for No)\n");
            scanf("%d", &is_boarded);
        }
    }

    return 0;
}