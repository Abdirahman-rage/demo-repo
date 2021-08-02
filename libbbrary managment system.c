/*-----------------------------------
 Project:  Library Management System
 Author:   Abdirahman Rge
 Date:     August, 2021
 Compiler: C99
 License:  MIT
-----------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

// Data structures

struct user {
    int id;
    char name[100];
    char tel[13];
    int is_staff;
};

// function prototypes
void execute_action(int action);
void close();
int menu();
void add_user();
void view_users();

int main()
{
    int action;
    printf("\tCounty Library Management System!\n");
    printf("Welcome Rage\n");
    // Navigation menu
    do {
        printf("1. Add user\n");
        printf("2. Add Book\n");
        printf("3. Exit\n");
        printf("Select action(1-3): ");
        scanf("%d",&action);
        // validate input
        if (action < 1 || action > 3)
            printf("Invalid action. Try again\n");
    } while(action < 1 || action > 3);
