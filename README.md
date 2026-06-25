# Electrical Load Limit Checker

A simple C++ console program that reads appliance power ratings and stops when the total load exceeds a safe limit of 3000 watts.

## Files

- `Question_15-Electrical Load Limit Checker.cpp` - main C++ source code.
- `Algorithm.md` - high-level algorithm and program flow.
- `Pseudocode.sql` - placeholder pseudocode file.
- `Makefile.win` - Windows build helper (if available).
- `.dev` file - project development metadata.

## Behavior

- Prompts the user for appliance power ratings in watts.
- Adds each entered rating to the cumulative total.
- Stops and reports when the total exceeds 3000 W.
- Displays the final total load.

## Build and Run

### Using g++

```powershell
cd "c:\Users\desmo\Desktop\C++Assignment 2\Question_15-Electrical Load Limit Checker"
g++ -o LoadChecker "Question_15-Electrical Load Limit Checker.cpp"
./LoadChecker
```

### Using Visual Studio Developer Command Prompt

```powershell
cl /EHsc "Question_15-Electrical Load Limit Checker.cpp"
"Question_15-Electrical Load Limit Checker.exe"
```

## Notes

- The program uses a `double` for power ratings so fractional watt values are accepted.
- No input validation is implemented, so invalid input may cause unexpected behavior.
