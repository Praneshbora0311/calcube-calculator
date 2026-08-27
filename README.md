# 🧮 Calcube – C Calculator

> 🖥️ A menu-driven command-line calculator built in C featuring basic arithmetic operations, modulus, power, and input validation.

---

## 📌 Overview

**Calcube** is a console-based calculator developed using the **C programming language**.

The program provides an interactive menu that allows users to select different mathematical operations and enter two numbers to perform calculations.

This project was created to practice fundamental C programming concepts and understand how functions, loops, switch-case statements, mathematical operations, and error handling work together in a complete program.

---

## 🎯 Problem Statement

Calculators are commonly used for performing mathematical operations. Building a calculator from scratch is a simple but effective way to understand programming logic and user interaction.

The objective of this project is to create a **menu-driven calculator in C** capable of performing multiple mathematical operations while handling invalid operations such as division or modulus by zero.

---

## ✨ Features

- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division
- % Modulus
- 🔢 Power
- 🔄 Continuous operation using a loop
- ⚠️ Division-by-zero handling
- ⚠️ Modulus-by-zero handling
- 🖥️ Simple command-line interface
- 📋 Menu-driven operation selection

---

## 🧮 Operations Available

| Choice | Operation | Description |
|:------:|-----------|-------------|
| 1 | ADD | Adds two numbers |
| 2 | SUBTRACT | Subtracts the second number from the first |
| 3 | MULTIPLY | Multiplies two numbers |
| 4 | DIVIDE | Divides the first number by the second |
| 5 | MODULUS | Finds the remainder |
| 6 | POWER | Raises the first number to the power of the second |
| 7 | EXIT | Exits the calculator |

---

## 🛠️ Tools & Technologies

- **Programming Language:** C
- **Compiler:** GCC
- **IDE:** Visual Studio Code
- **Libraries:** `stdio.h`, `math.h`
- **Version Control:** Git & GitHub
- **Operating System:** Windows

---

## 🧠 Key Concepts Learned

### 🔹 Functions

Functions are used to divide the program into smaller and reusable sections.

The project includes functions such as:

```c
double division(double a, double b);
double modulus(int a, int b);
void print_menu();
```

These functions make the program more organized, readable, and easier to maintain.

---

### 🔹 Switch-Case

A `switch-case` statement is used to perform the operation selected by the user.

```c
switch(choice) {
    case 1:
        result = first + second;
        break;

    case 2:
        result = first - second;
        break;

    case 3:
        result = first * second;
        break;
}
```

---

### 🔹 While Loop

A `while` loop keeps the calculator running continuously until the user selects the exit option.

```c
while(1) {
    print_menu();
    scanf("%d", &choice);

    if(choice == 7) {
        break;
    }
}
```

---

### 🔹 Conditional Statements

`if-else` statements are used to check for invalid operations and prevent mathematical errors.

For example, the program checks whether the second number is zero before performing division or modulus.

---

### 🔹 Type Casting

The modulus operator `%` works with integer operands.

Therefore, the input values are converted to integers before performing the modulus operation.

```c
result = modulus((int)first, (int)second);
```

This helped me understand how **type casting** works in C.

---

### 🔹 Mathematical Functions

The `pow()` function from the `math.h` library is used to calculate powers.

```c
result = pow(first, second);
```

---

## 💡 Key Insights

Through this project, I learned and practiced:

- 📦 Functions and function prototypes
- 🔀 `switch-case`
- 🔁 `while` loops
- 🔢 Variables and data types
- ⌨️ User input using `scanf()`
- 🧮 Arithmetic operations
- 🔄 Type casting
- 📚 Using header files
- 📐 Mathematical functions
- ⚠️ Error handling
- 🐛 Debugging
- ⚙️ Compiling and running a C program
- 🖥️ Working with the terminal
- 🌐 Basic GitHub project management

---

## 🐛 Challenges & Debugging

While developing **CALCUBE**, I faced some challenges that helped me understand important C programming concepts.

### 1️⃣ Division by Zero

#### ❌ Problem

Division by zero is mathematically invalid and can cause an error during program execution.

#### ✅ Solution

I added a condition to check whether the denominator is zero before performing the division.

```c
if(b == 0) {
    fprintf(stderr, "INVALID ARGUMENT FOR DIVISION");
    return NAN;
}
```

#### 💡 What I Learned

I learned the importance of **input validation and error handling** when performing mathematical operations.

---

### 2️⃣ Modulus by Zero

#### ❌ Problem

The modulus operation cannot be performed when the second number is zero.

#### ✅ Solution

I added a validation check before performing the modulus operation.

```c
if(b == 0) {
    fprintf(stderr, "INVALID ARGUMENT FOR MODULUS");
    return NAN;
}
```

#### 💡 What I Learned

This helped me understand how to handle invalid inputs and prevent unexpected program behavior.

---

## 📊 Program Flow

```text
                 🟢 START
                    │
                    ▼
              📋 Display Menu
                    │
                    ▼
             ⌨️ Enter Choice
                    │
          ┌─────────┼─────────┐
          ▼         ▼         ▼
       ADD /      DIVIDE /    EXIT
       SUB /      MODULUS /     │
       MUL        POWER        ▼
          │          │        🏁 END
          └────┬─────┘
               ▼
        ⌨️ Enter Two Numbers
               │
               ▼
        🔍 Perform Operation
               │
               ▼
          📊 Display Result
               │
               ▼
          🔄 Return to Menu
```

---

## 🖥️ Sample Output

```text
-----------------------------------------
WELCOME TO THE CALCUBE
-----------------------------------------

1.ADD
2.SUBTRACT
3.MULTIPLY
4.DIVIDE
5.MODULUS
6.POWER
7.EXIT

ENTER YOUR CHOICE: 1

ENTER THE FIRST NUMBER: 25
ENTER THE SECOND NUMBER: 15

RESULT OF OPERATION = 40.00
```

---

## 📸 Program Output

![CALCUBE Output](screenshots/calculator-output.png)

---

## ▶️ How to Run This Project

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/Praneshbora0311/calcube.git
```

### 2️⃣ Open the Project Directory

```bash
cd calcube
```

### 3️⃣ Compile the Program

Using GCC:

```bash
gcc src/Calcube.c -o calcube
```

### 4️⃣ Run the Program

#### 🪟 Windows

```bash
calcube
```

#### 🐧 Linux / macOS

```bash
./calcube
```

---

## 📁 Project Structure

```text
📁 calcube
│
├── 📁 src
│   └── 📄 Calcube.c
│
├── 📁 screenshots
│   └── 🖼️ calculator-output.png
│
├── 📄 README.md
└── 📄 .gitignore
```

---

## 🏆 Results & Conclusion

**CALCUBE** successfully performs essential mathematical operations through a simple menu-driven command-line interface.

The project provided practical experience with **functions, loops, switch-case statements, mathematical operations, type casting, and error handling**.

Building CALCUBE helped me strengthen my understanding of C programming and apply individual programming concepts together in a complete working project.

---

## 🔮 Future Improvements

Possible improvements for future versions include:

- 🔢 Square root operation
- 📊 Percentage calculation
- 📐 Trigonometric functions
- 📈 Logarithmic functions
- 🧾 Calculation history
- 🔄 Improved input validation
- 🧮 Scientific calculator mode
- 🖥️ Graphical user interface

---

## 👨‍💻 Author & Contact

### Pranesh Pravin Bora

🎓 First-Year Computer Science Engineering Student

💻 Currently learning C programming and building practical software projects.

📧 **Email:** praneshbora0311@gmail.com

💼 **LinkedIn:** https://www.linkedin.com/in/praneshbora

📱 **Contact:** +91 7498503346

🐙 **GitHub:** https://github.com/Praneshbora0311

---

## ⭐ Support

If you found this project useful or interesting, consider giving the repository a ⭐ **Star**!

---

> 🚀 **Building one project at a time, learning one concept at a time.**
>
> 💻 *Built with C, curiosity, and continuous learning.*
> ## 👨‍💻 Author & Contact

### Pranesh Pravin Bora

🎓 First-Year Computer Science Engineering Student

💻 Currently learning C programming and building practical software projects.

📧 **Email:** praneshbora0311@gmail.com

💼 **LinkedIn:** https://www.linkedin.com/in/praneshbora

📱 **Contact:** +91 7498503346

🐙 **GitHub:** https://github.com/Praneshbora0311
