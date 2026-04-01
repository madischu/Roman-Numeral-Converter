# Roman-Numeral-Converter

## Program Description
This program converts a Roman numeral entered by the user into its corresponding positive integer value. 

**A class (romanType) is used to:**
- Store the Roman numeral
- Convert and store its integer equivalent
- Output either the Roman numeral or the integer form

The program follows the standard Roman numeral rules, including subtraction cases (e.g., IV = 4, IX = 9)

### Inputs
- A Roman numeral string (e.g., MCXIV, CCLIX, MDCLXVI)

### Outputs
- The Roman numeral (as entered)
- The converted integer value

## Compile and Run Instructions
**Using g++**

 *g++ main.cpp romanType.cpp -o roman 
./roman*

## Design Documentation
**Detailed Pseudocode**

Start

Prompt user for Roman numeral
Store input in romanType object

Call conversion function:
  Set total = 0
  For each character in string:
    Get value of current Roman symbol
    Get value of next symbol
    If current < next:
      subtract current
    Else:
      add current

Store result as integer 

Display Roman numeral
Display integer value 

End

## UML Class Diagram
<img width="352" height="320" alt="image" src="https://github.com/user-attachments/assets/8410b4ab-5579-47cd-a9e3-c3bf99f92c3d" />

## Use Case Diagram
<img width="507" height="483" alt="image" src="https://github.com/user-attachments/assets/6e739b58-2cf8-4ffb-9b94-8b846135057b" />

## Program Execution Evidence

