# CS 3503 Assignment 1- Number Base Conversion

## Author
Alexander Duty

## Description
In this assignment I implemented methods to perform number base conversion using two different algorithms. The first algorithm uses division to collect remainders, while the second uses subtraction by finding the highest power then subtracting multiples.

## Build Instructions
I ran this program in terminal, which involves opening the assignment folder in terminal (to specify the directory), then inputting the following:

```
gcc -o convert main.c convert.c
./convert
```

You can get a copy of the assignment folder by downloading the GitHub repository and extracting the zip file (if I recall correctly). Using bash to execute the program would probably yield the same results, although I'm not quite familiar with it.
 
## Test Results
I did not have a pass/fail checker for the print_table functions, as I wasn't sure how I would approach that. Otherwise, the rest of the tests that use the division and subtraction algorithms do have auto checks for whether they pass or not.

Out of the 86 conversion tests that were automatically checked, all of them successfully passed. The remaining 14 print_table function tests are still displayed in the output, but do not have a pass/fail check.
 
## Notes
I had a very difficult time with this assignment, since I had essentially no prior experience with C programming. Getting the program to read the test file was especially challenging, but I did manage to make it work. It probably contributed to my late submission, but I'm hoping that the experience from this assignment will help me better understand whatever upcoming projects this course has to offer.
