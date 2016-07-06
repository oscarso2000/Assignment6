# Assignment6
## Objectives

To gain a solid understanding of structures and enums.

### Part 1
1. Write a program, `banking.c`, that uses structures to represent a bank account.  Accounts should have an account number, name, and balance.  Create functions to deposit or withdraw money from the balance.  Write a driver that creates 2 accounts, adds money to each, then withdraws money from each.  Print details of the account between each transaction.

2.  Write a program, `complex.c`, that implements complex numbers as a structure and allows a user to perform calculations with them.  Your structure should only contain the real and imaginary portions of a complex number.  Create functions to add, subtract, multiply, divide and display complex numbers.  Allow the user to select what functions they want to use (much like your calculator.c programs from last week) and enter the complex numbers they want to perform calculations with.

3.  Submit the code computing the student average that we worked on it class. 


### Part 2

In a text file `assignment6.txt`, answer the following questions:

1.  What will be output of following C code?  Explain your answer.
  
``` C
	int main()
{
  struct employee
  {
    unsigned int id = 8;
    unsigned int sex = 1;
    unsigned int age = 7;
  };
  struct employee emp1={203,1,23};
  clrscr();
  printf("%d\t%d\t%d",emp1.id,emp1.sex,emp1.age);
  getch();
}
```

2. How are structures and enumerations similar and different? Give an example of when you would use each.

3. Explain the difference between passing an array directly to a function versus passing a structure containing an array? 


### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your assignment6.txt file.

All files must be submitted via GitHub by 10:00am 7/7. 
