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
<img width="337" height="309" alt="image" src="https://github.com/user-attachments/assets/6588cb71-0cfc-4ca1-a1f0-3331477a7189" />

## Use Case Diagram
<img width="507" height="483" alt="image" src="https://github.com/user-attachments/assets/6e739b58-2cf8-4ffb-9b94-8b846135057b" />

## Program Execution Evidence
<img width="289" height="63" alt="image" src="https://github.com/user-attachments/assets/8365fba9-0ce2-4e3a-919c-f3d300f213e3" />
<img width="294" height="64" alt="image" src="https://github.com/user-attachments/assets/a63c68e2-8182-4f67-96f0-ac1e3c1bbde5" />
<img width="301" height="66" alt="image" src="https://github.com/user-attachments/assets/6998efce-2d8e-46d9-bb7f-4a76054dbca6" />



