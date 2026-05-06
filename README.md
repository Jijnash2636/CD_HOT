# Compiler Design - Hands-On Training (HOT)

## Project Overview
This project is part of the Compiler Design course (SEM 6) and demonstrates token density analysis in source code.

## Description
The program calculates the **Token Density** of a source code file, which is the ratio of total tokens to total lines. Based on a predefined threshold, it flags whether the code is "Token Heavy" or "Normal".

## Features
- Calculates token density (tokens per line)
- Uses a threshold value of 5.0
- Generates flags:
  - **Token Heavy Code** - when density > 5.0
  - **Normal Code** - when density ≤ 5.0

## Files
- `RA2311026050074.c` - Main C source code
- `RA2311026050074.exe` - Compiled executable
- `RA2311026050074_Explanation.pdf` - Detailed project explanation
- `RA2311026050074_Output.png` - Sample output screenshot

## How to Compile and Run

### Compilation
```bash
gcc RA2311026050074.c -o RA2311026050074.exe
```

### Execution
```bash
./RA2311026050074.exe
```

## Input Format
- Total number of tokens (integer)
- Total number of lines (integer)

## Output
- Token density value
- Flag indicating code type (Token Heavy/Normal)

## Author
- **Jijnash** (RA2311026050074)
- GitHub: [@Jijnash2636](https://github.com/Jijnash2636)

## Course Details
- **Subject**: Compiler Design
- **Semester**: 6
- **Year**: 2026
