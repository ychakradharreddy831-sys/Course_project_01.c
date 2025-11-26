# Course_project_01.c
transport &amp; logistics

project title = Transport & Logistics Management System


FUNCTIONAL REQUIREMENTS
Functional requirements describe what the system should do.
For this project, the system must:
1. Display a Main Menu
Show transport & logistics options
Allow user to select services
2. Book Passenger Tickets
Collect passenger information:
Name
Departure location
Destination
Number of seats
Calculate fare based on number of seats
Display ticket details
3. Send Luggage (Cargo)
Collect cargo details:
Sender name
Pickup location
Delivery location
Weight of luggage
Calculate cost based on weight
Display cargo receipt
4. Exit the System
User can safely exit the system
Display a thank-you message
5. Input Validation
Accept valid numeric and text inputs
Show error if invalid menu option is chosen


FEATURES OF THE SYSTEM
1. User-Friendly Menu
A simple menu lets users:
Book passenger tickets
Send luggage
Exit the system
2. Ticket Booking System
Stores customer name, origin, destination
Calculates fare automatically (500 per seat)
Displays a confirmation ticket
3. Luggage / Cargo Booking
Accepts sender details and cargo weight
Calculates cost (50 per kg)
Shows receipt with all entered details
4. Real-Time Calculations
No need for manual fare or cost calculation
System performs all math automatically
5. Structured Code Using C
Uses struct for Passenger Ticket
Uses struct for Luggage
Organized with functions:
bookTicket()
sendLuggage()
mainMenu()
6. Repeatable Operations
Runs in a loop
User can perform unlimited bookings


HOW TO RUN THE PROJECT

Follow these steps:

Step 1:Save the Code Save

the full code in a file named:

transport_logistics.c

Step 2: Compile the Program

If using GCC, run:

gcc transport_logistics.c -o transport

Step 3: Use the Menu



You will see:
==============================
  MBG Transport & Logistics
==============================
1. Book Passenger Ticket
2. Send Luggage (Cargo)
3. Exit


Enter option:

--- Passenger Ticket Booking ---

Enter Passenger Name:Aravindhsamy

Enter Departure Location: Chennai 

Enter Destination: Kadapa

Enter Number of Seats: 2

--- TICKET BOOKED SUCCESSFULLY ---

Passenger Name: Aravindhsamy

From: Chennai 

To: Kadapa

Seats Booked: 2

Total Fare: 1000.00

--------------------------------


--- Luggage / Cargo Service ---

Enter Sender Name: Aravindhsamy

Enter Pickup Location: Chennai 


Enter Delivery Location: Kadapa

Enter Weight of Luggage (kg): 1



--- LUGGAGE BOOKED SUCCESSFULLY ---

Sender Name: Aravindhsamy

From: Chennai 

To: Kadapa 

Weight: 15.00 kg

Total Cost: 750.00

--------------------------------



<img width="429" height="191" alt="Screenshot 2025-11-26 101118" src="https://github.com/user-attachments/assets/330940aa-a997-479a-93dc-8ffa7c0ec3db" />


<img width="532" height="412" alt="Screenshot 2025-11-26 101555" src="https://github.com/user-attachments/assets/b107b743-acc3-4db2-a461-8b13d888f200" />

<img width="470" height="399" alt="Screenshot 2025-11-26 101824" src="https://github.com/user-attachments/assets/11e9f140-00ae-42e9-a246-4c2eabb2f451" />

<img width="365" height="84" alt="Screenshot 2025-11-26 101947" src="https://github.com/user-attachments/assets/262164e2-08ef-46ed-b493-dccb2550adb6" />

