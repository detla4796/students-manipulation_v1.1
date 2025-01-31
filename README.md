# Student Management System with File Handling

## Overview

This C++ program is an enhanced version of a student management system that allows users to input, analyze, and manage student data. The program supports both manual input and file-based input for flexibility. It also includes functionalities to filter and analyze student data based on specific criteria, such as group, age, marks, and average scores.

## What's New in This Version?

1. **File Input Support**:
   - Users can now choose to input student data either manually or from a text file.
   - A new function `from_file` counts the number of lines in the input file to determine the number of students.
   - The `input_from_file` function reads student data directly from the specified file.

2. **File Output for Results**:
   - All analysis results (e.g., students in a specific group, students with high marks, etc.) are saved to separate output files for easy access and record-keeping.
   - Each analysis generates a unique file named according to the query (e.g., `group_name.txt`, `above_3.txt`, `avg_points.txt`).

3. **Improved User Experience**:
   - Users are prompted to choose between manual input and file input at the start of the program.
   - Error handling ensures the program does not crash if the specified file is missing or invalid.

4. **Sample Input File**:
   - A sample file `my_text.txt` is provided to demonstrate the expected format for file-based input.

## Features

1. **Input Data**:
   - Manually input student details: name, age, group, and marks in three subjects (RPM, Test, Math).
   - Alternatively, load student data from a text file.

2. **Output Data**:
   - Displays all entered student data in a tabular format.

3. **Find by Group**:
   - Filters and displays students belonging to a specific group.
   - Saves the results to a file named `<group_name>.txt`.

4. **Find by Age**:
   - Filters and displays students based on their age (either older or younger than a specified value).

5. **Find by Marks**:
   - Displays students who scored above a certain threshold in any of the three subjects.
   - Saves the results to `above_3.txt`.

6. **Find High Achievers**:
   - Identifies students with high average scores in individual subjects or across all subjects.
   - Saves the results to `avg_points.txt` and `avg_for_all_points.txt`.

7. **Find Specific Conditions**:
   - Finds students who meet specific conditions, such as having a high score in one subject but a low score in another.

## File Structure

- **func.h**: Header file containing function declarations.
- **func.cpp**: Implementation of the functions declared in `func.h`.
- **fstream-func.cpp**: Main program file where the execution begins.
- **my_text.txt**: Sample input file containing student data.

## How to Run
### Follow On-Screen Instructions : 

- Choose between manual input (`1`) or file input (`2`).
- If using file input, ensure the file (e.g., `my_text.txt`) is in the same directory as the executable.
- Use the menu options to filter and analyze the data.
     