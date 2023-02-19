# A-basic-scientific-calculator

This C program is a scientific calculator that performs various mathematical operations based on the user's input. The program prompts the user to enter an operator, which can be one of the following: addition (+), subtraction (-), multiplication (*), division (/), power (^), square root (sqrt), cosine (cos), or tangent (tan).

Depending on the user's choice of operator, the program then prompts the user to enter one or two numbers (depending on the operation) and performs the requested operation using the appropriate mathematical function. The result is then displayed on the console.

For example, if the user enters the operator "+" and then inputs the numbers 5 and 6, the program will output "5.00 + 6.00 = 11.00". Similarly, if the user enters the operator "sqrt" and inputs the number 25, the program will output "sqrt(25.00) = 5.00".

The program uses the "switch" statement to handle the different operator cases, and it includes the "math.h" library to use the mathematical functions such as pow, sqrt, cos, and tan. The program also uses the constant M_PI from the math library to convert degrees to radians for the cosine and tangent functions.



