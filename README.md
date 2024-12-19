# Compiler Construction Practicals

This repository contains all practical assignments completed as part of the **Compiler Construction** course. The practicals demonstrate various concepts and techniques involved in compiler design and implementation.

## Student Information
- **Name:** Sarthak A. Mayani
- **Roll No:** 22CE063

## Course Objectives
The practical assignments aim to:
- Provide hands-on experience in designing and implementing different components of a compiler.
- Deepen the understanding of lexical analysis, syntax analysis, semantic analysis, code optimization, and code generation.

## Practicals Included

1. **String Validation Against Regular Expression**
   - **Objective:** Implement a program that validates a user-input string against the regular expression `a*bb`.
   - **Language Constraint:** C Language
   - **Input Requirements:**
     - Accept a character string from the user.
     - Ensure the input is terminated with a newline character.
   - **Expected Output:**
     - If the input string matches the pattern `a*bb`, output: "Valid String".
     - Otherwise, output: "Invalid String".
   - **Sample Input/Output:**
     | Input  | Output        |
     |--------|---------------|
     | aaabb  | Valid String  |
     | Abab   | Invalid String|
   - **Test Cases:**
     - Input: bbbb, aaa, baaabb, aaabbb
     - Output: Invalid String for all cases except `baaabb`.

2. **String Validation Using Finite Automata**
   - **Objective:** Implement a program that validates a given string against rules defined in terms of finite automata.
   - **Language Constraint:** Any Programming Language
   - **Input Requirements:**
     - Accept rules in the form of finite automata (e.g., states, transitions, start state, accept states).
     - Accept a string to be validated against the provided finite automata rules.
   - **Expected Output:**
     - If the string adheres to the rules of the finite automata, output: "Valid String".
     - Otherwise, output: "Invalid String".
   - **Sample Input/Output:**
     | Input                     | Output       |
     |---------------------------|--------------|
     | Number of input symbols: 2              |
     | Input symbols: a b                      |
     | Number of states: 4                     |
     | Initial state: 1                        |
     | Number of accepting states: 1           |
     | Accepting states: 2                     |
     | Transition table:                       |
     | 1 to a -> 2                             |
     | 1 to b -> 3                             |
     | 2 to a -> 1                             |
     | 2 to b -> 4                             |
     | 3 to a -> 4                             |
     | 3 to b -> 1                             |
     | 4 to a -> 3                             |
     | 4 to b -> 2                             |
     | Input string: abbabab                   |
     | Valid String                            |
   - **Test Cases:**
     - String over `0` and `1` where every `0` is immediately followed by `11`.
     - String over `a`, `b`, `c` starts and ends with the same letter.
     - String over lowercase alphabet and digits, starts with an alphabet only.

## Repository Structure
```
📁 CompilerConstructionPracticals
├── Practical1_StringValidationRegex
├── Practical2_StringValidationFiniteAutomata
├── Practical3_
├── Practical4_
├── Practical5_
├── Practical6_
├── Practical7_
└── README.md
```

## Contact
For any queries, feel free to reach out:
- Email: sarthak.mayani@example.com (replace with your actual email if needed)
- 
---

> This repository is for academic purposes and is subject to review by the professor. Unauthorized distribution or usage is discouraged.

---

**Submitted to:**
- **Prof. Sarita Thummar**
- **CSPIT**

**Date:** [Submission Date]
