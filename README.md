# TEST 4 File Handling Program (Supplementary)

## Overview

The **TEST 4 File Handling Program (Supplementary)** is a C++ application designed to compute the total series capacitance of capacitors and calculate voltage drops across each capacitor. The program allows users to input capacitance values, perform calculations, and store results in a file.

## Features

- **User Input:**
  - Allows users to enter seven capacitance values with validation for positive values.
- **Total Series Capacitance Calculation:**
  - Computes the total series capacitance of the given capacitor values.
- **Voltage Drop Calculation:**
  - Calculates the voltage drop across each capacitor using a fixed supply voltage of 12V.
- **File Handling:**
  - Saves calculated results to `file.txt` in a formatted table.
- **Error Handling:**
  - Displays error messages for invalid input and file handling issues.

## How to Run the Program

1. **Compile the program:**

   ```bash
   g++ TEST_4_File_Handling_Supplementary.cpp -o capacitance_calculator
   ```

2. **Run the executable:**

   ```bash
   ./capacitance_calculator
   ```

3. **Follow the on-screen menu options:**

   - Enter capacitance values.
   - Calculate series capacitance.
   - Calculate voltage drop.
   - Exit the program.

## Menu Options

1. Enter seven capacitance values.
2. Calculate the total series capacitance.
3. Calculate the voltage drop across each capacitor.
4. Exit the program.

## Sample Input/Output

**Example Input:**

```
Enter seven capacitance values:
Capacitance value #1: 10
Capacitance value #2: 20
...
Capacitance value #7: 50
```

**Example Output in file.txt:**

```
-------------------------------------
Capacitance Values       Voltage Drop
-------------------------------------
10                       2.4
20                       1.2
...
50                       0.48
-------------------------------------
```

## Formulae Used

- **Total Series Capacitance Calculation:**
  ```
  C_total = 1 / (1/C1 + 1/C2 + ... + 1/Cn)
  ```
- **Voltage Drop Calculation:**
  ```
  Voltage Drop = Supply Voltage * (C_total / Cn)
  ```

## Technologies Used

- C++
- Standard I/O (`iostream`)
- File Handling (`fstream`)
- Mathematical Computations (`math.h`)

## Future Improvements

- Add support for dynamic capacitor input sizes.
- Implement an option to store results in a database.
- Introduce a user-friendly GUI for better interaction.

---

Thank you for using the Capacitance Calculation Program!

