# MultiCalendar

This project is a C program that retrieves the current system time using the time.h library and converts it into three different calendar systems: Gregorian (Miladi), Solar Hijri (Shamsi), and Lunar Hijri (Qamari).

The program manually calculates leap years and month durations for each calendar system by processing the total number of seconds elapsed since the Unix Epoch (January 1, 1970).

Features
Gregorian Calendar: Calculates the current day, month, and year.
Solar Hijri Calendar: Converts system time to the Persian calendar (Jalali) with leap year support.
Lunar Hijri Calendar: Estimates the Islamic calendar date based on astronomical cycles.
Leap Year Logic: Includes custom logic for leap years in all three systems (e.g., the 33-year cycle for Shamsi and the 30-year cycle for Qamari).
No External Dependencies: Uses only standard C libraries (stdio.h, stdlib.h, time.h).
How It Works
The program gets the total seconds from the system clock using time(0).
It subtracts the calculated seconds for leap years to align the year count.
It iterates through months, subtracting the appropriate number of days (converted to seconds) until the current month and day are determined.
Finally, it prints the formatted date for each calendar.
