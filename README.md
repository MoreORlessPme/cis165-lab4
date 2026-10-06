[readme.txt](https://github.com/user-attachments/files/33085315/readme.txt)
This repository contains two C++ programs:
av calculates the sum and average 
MMchangeRain calculates ocean-level rise 
av
1. Store five values as `double`.
2. Add them into `sum`.
3. Divide `sum` by 5 into `average`.
4. Display both results.
MMchangeRain
1. Store the annual rise as a constant.
2. Multiply it by 5, 7, and 10 years.
3. Store and display each result.


Testing
Average test:
Values: 28, 32, 37, 24, 33 Sum = 154 Average = 30.8
Ocean-level test:
5 years = 7.5 mm 7 years = 10.5 mm 10 years = 15 mm
Both programs produced the expected results.


Explanation
1 double allows decimal values, such as the average of 30.8.
2 The five values are added into `sum`, then `sum` is divided by 5.
3 An average requires adding all values first, then dividing by the number of values.
4 The annual rise is multiplied by the number of years.
5 The annual rise should not change while the program runs.
6 It makes the code easier to read, test, and debug.
