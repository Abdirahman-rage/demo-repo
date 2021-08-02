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
    int action;
    while(1) {
        action = menu();
        execute_action(action);
        printf("Press any key to continue");
        getchar();
        getch();
        system("cls");
    }

    return 0;
}



void execute_action(int action) {
    switch (action) {
    case 1:
        add_user();
        break;
    case 2:
        view_users();
        break;
    case 3:
        printf("adding book\n");
        break;
    case 4:
        close();
        break;
    default:
        printf("Sorry. I don't know how to execute that\n");
    }

}

void close() {
    printf("Thank for you using the system.");
    Sleep(5000);
    exit(0);
}

int menu() {
    int action;

    do {
        printf("\tCommunity Library System\n");
        printf("Welcome Mr.Rage\n");
        printf("1. Add user\n");
        printf("2. View all users\n");
        printf("3. Add book\n");
        printf("4. Exit\n");
        printf("Action(1-4): ");
        scanf("%d",&action);
        // validate
        if (action < 1 || action > 4) {
            printf("Invalid action.Try again\n");
            Sleep(2000);
            system("cls");
        }
    } while(action < 1 || action > 4);

    return action;
}
