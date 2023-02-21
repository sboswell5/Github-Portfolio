# Github-Portfolio
An early program from Spring 2023 at Jacksonville State University in Computer Programming I. 

Conclusions – what did you learn from it, recommendations on how to improve it.

The prompt for this lab was to write a program which mimics a calculator. The program is meant to take input in the form of two numbers and perform a simple calculation, of addition, subtraction, multiplication, or divison. 

I wrote this program by first declaring our variables–one for the first value, the second value, result of the operation, and the operator to act on the inputs. I have two statements to take in value one, then the operator, and finally the second value. 

Then, I used a switchcase block to choose different results based on each operator option. These were straightforward, but the division section needed to include an output for a situtation where the denominator is zero, which does not exist. 

Within the divison case, if value two is equal to zero, "You cannot divide by zero." Will be printed to the screen. 

Finally, the output of the two variables as determined by the operator will be printed to the screen. 

I learned how to use SwitchCase from this coding project. Looking back, it would be better to include a return 0; line after the print statement within the division option of the SwitchCase block. As it is now, if a user inputs a 0 as a denominator, the code still outputs a statement saying division by zero is not permitted, but it also states that the answer is zero on the next line. 
