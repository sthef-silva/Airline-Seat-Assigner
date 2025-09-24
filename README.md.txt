# sthef-silva.github.io
Personal résumé website built with HTML and CSS

# COP 3223 Airline Seat Assigner (First Class vs. Economy, 6-Seat Demo):

A small C console program that assigns seats on a 6-seat plane. Seats 1–3 are First Class; seats 4–6 are Economy. The user requests a section; the program assigns the first open seat in that section. If the section is full, it offers the other section. When all seats are taken, the program announces that the plane is fully boarded.

## Features:

Two sections: FIRST_CLASS (1–3) and ECONOMY (4–6)

Fallback offer to switch sections if preferred section is full

“Next flight leaves in 3 hours” message when no seats remain in either section

Loop continues until all seats are filled or user confirms boarding complete

## Example Session:
Please type 1 for "first class"
Please type 2 for "economy"
1
Your seat is assigned to first class seat 1
Does everyone boarded? (1 for Yes, 0 for No)
0
Please type 1 for "first class"
Please type 2 for "economy"
1
Your seat is assigned to first class seat 2
...
The plane is fully boarded.

## How to Build & Run:
- Prerequisites:

A C compiler (e.g., gcc/clang)

OS: works on Windows, macOS, Linux (console)

File: main.c (the code you pasted)

## Build commands:

- macOS / Linux (Terminal):
gcc -std=c11 -Wall -Wextra -O2 -o seat_assigner main.c
./seat_assigner

- Windows (PowerShell / CMD with MinGW or MSYS2):
gcc -std=c11 -Wall -Wextra -O2 -o seat_assigner.exe main.c
seat_assigner.exe

!!! If you’re using VS Code, open the folder, add a simple tasks.json or use the C/C++ extension’s build button with the same flags.


## Input Notes:

When asked for section: enter 1 for First Class, 2 for Economy.

If your chosen section is full, enter 1 to accept the offered switch, 0 to decline.

After each assignment, when asked “Does everyone boarded?”, enter:

1 if you’re done,

0 to continue assigning more passengers.

## Limitations & Future Enhancements:

Fixed plane size (6 seats). Could be generalized with a larger NUM_SEATS.

No passenger names or boarding passes. Could add a passenger struct.

No validation for non-integer input. Could add robust input parsing.

Could print a seat map after each assignment for clarity.

## Protected Structure (suggested)
airline-seat-assigner/
├─ README.md
└─ main.c

## Skills: 
C · Algorithms · CLI · Resource Allocation · Arrays · Control Flow

## License:
TBD