#include <stdio.h>
#include <string.h>

// ---------------------------
//      STRUCT DEFINITIONS
// ---------------------------
typedef struct {
    char name[50];
    char from[50];
    char to[50];
    int seats;
    float fare;
} Ticket;

typedef struct {
    char senderName[50];
    char from[50];
    char to[50];
    float weight;
    float cost;
} Luggage;


// ---------------------------
//       FUNCTION HEADERS
// ---------------------------
void bookTicket();
void sendLuggage();
void mainMenu();


// ---------------------------
//          MAIN
// ---------------------------

int main() {
    mainMenu();
    return 0;
}


// ---------------------------
//      MAIN MENU
// ---------------------------
void mainMenu() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf("  MBG transport & logistics \n");
        printf("==============================\n");
        printf("1. Book Passenger Ticket\n");
        printf("2. Send Luggage (Cargo)\n");
        printf("3. Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;
            case 2:
                sendLuggage();
                break;
            case 3:
                printf("\nThank you for using the system!\n");
                return;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}


// ---------------------------
//      BOOK TICKET
// ---------------------------
void bookTicket() {
    Ticket t;
    float baseFare = 500.0; // per seat

    printf("\n--- Passenger Ticket Booking ---\n");

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Departure Location: ");
    scanf(" %[^\n]", t.from);

    printf("Enter Destination: ");
    scanf(" %[^\n]", t.to);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    t.fare = t.seats * baseFare;

    printf("\n--- TICKET BOOKED SUCCESSFULLY ---\n");
    printf("Passenger Name: %s\n", t.name);
    printf("From: %s\n", t.from);
    printf("To: %s\n", t.to);
    printf("Seats Booked: %d\n", t.seats);
    printf("Total Fare: %.2f\n", t.fare);
    printf("-------------------------------\n");
}


// ---------------------------
//      SEND LUGGAGE
// ---------------------------
void sendLuggage() {
    Luggage l;
    float ratePerKg = 50.0;

    printf("\n--- Luggage / Cargo Service ---\n");

    printf("Enter Sender Name: ");
    scanf(" %[^\n]", l.senderName);

    printf("Enter Pickup Location: ");
    scanf(" %[^\n]", l.from);

    printf("Enter Delivery Location: ");
    scanf(" %[^\n]", l.to);

    printf("Enter Weight of Luggage (kg): ");
    scanf("%f", &l.weight);

    l.cost = l.weight * ratePerKg;

    printf("\n--- LUGGAGE BOOKED SUCCESSFULLY ---\n");
    printf("Sender Name: %s\n", l.senderName);
    printf("From: %s\n", l.from);
    printf("To: %s\n", l.to);
    printf("Weight: %.2f kg\n", l.weight);
    printf("Total Cost: %.2f\n", l.cost);
    printf("-------------------------------\n");
}
