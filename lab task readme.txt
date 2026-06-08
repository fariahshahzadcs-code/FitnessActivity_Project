# OOP-Lab-Manual
## Week01
### Experiment 01
Write a program that declares a structure based on the following entity shown in the box. The program must
declare and initialize an instance of the structure entity i.e. Student.
The attributes of the entity are shown in oval shapes associated with the entity. Use the following data type for
the attributes of the student:
* integer for studentID
* char* for studentName
* char* for courscode
* char* for courseName
* integer for courseMarks
### Experiment 02
Create a structure of type Date that contains three members: the month, the day of the month, and the year, all of
type int. (Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, store
it in a variable of type struct Date, then retrieve the values from the variable and print them out in the same
format.
### Experiment 03:
Create a structure called Employee that contains two members: an employee number (type int) and the
employee’s compensation (in dollars; type float). Ask the user to fill in this data for three employees, store it in
three variables of type struct Employee, and then display the information for each employee. Use a seperate
display function for the information display.

## Week02
### Experiment 01
Write a program to define a structure with 5 members. The first member be student name and the other member
be student roll number and marks obtained in 3 subjects. Input values from the user. Add the marks of the
subject and calculate the total marks and then print these numbers and total marks of the student.
### Experiment 02
Create a structure of type Date that contains three members: the month, the day of the month, and the year, all of
type int. (Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, store
it in a variable of type struct Date, then retrieve the values from the variable and print them out in the same
format.
### Experiment 03
Create a structure called Employee that contains two members: an employee number (type int) and the
employee’s salary (in dollars; type float). Ask the user to fill in this data for three employees and then display
the information for each employee. Use a separate display function for the information display.

## Week03
### Experiment 01
Design a class called Date. The class should store a date in three integers: month, day, and year. There should be
member functions to print the date in the following forms:
12/25/2014
December 25, 2014
25 December 2014 

Demonstrate the class by writing a complete program implementing it. 

**Input Validation:** Do not accept values for the day greater than 31 or less than 1. Do not accept values for the
month greater than 12 or less than 1.
### Experiment 02
Write a class definition Distance with two data members feet and inches
This class also contains member functions
* void setFeet(int)
* void setInches( float)
* void showDistance()
  
Demonstrate the class by writing a complete program implementing it.
### Experiment 03
Write a class named Employee that has the following member variables:
* Name: A string that holds the employee’s name
* ID Number: An int variable that holds the employee’s ID number
* Department: A string that holds the name of the department where the employee works
* Position: A string that holds the employee’s job title

Write appropriate mutator functions that store values in these member variables and accessor functions that
return the values in these member variables. Once you have written the class, write a separate program that
creates three Employee objects to hold the following data.

The program should store this data in the three objects and then display the data for each employee on the
screen.

## Week04
### Experiment 01
Write a class named Employee that has the following member variables:
  - Name: A string that holds the employee’s name
  - idNumber: An int variable that holds the employee’s ID number
  - Department: A string that holds the name of the department where the employee works
  - Position: A string that holds the employee’s job title
  
 A constructor that accepts the following values as arguments and assigns them to the
appropriate member variables: employee’s name, employee’s ID number, department, and
position
 A constructor that accepts the following values as arguments and assigns them to the
appropriate member variables: employee’s name and ID number. The department and position
fields should be assigned an empty string ("")
 A default constructor that assigns empty strings ("") to the name, department, and position
member variables, and 0 to the idNumber member variable

Write appropriate setter/getter functions that store values and return the values in these member
variables. Once you have written the class, write a program that creates three Employee objects to hold
the following data.

The program should store this data in the three objects and then display the data for each employee on
the screen.

### Experiment 02
Write a Circle class that has the following member variables.
* radius: a double
* pi: a double initialized with the value 3.14159

The class should have the following member functions:
* Default Constructor: A default constructor that sets radius to 0.0
* Constructor: Accepts the radius of the circle as an argument
* setRadius: A mutator function for the radius variable
* getRadius: An accessor function for the radius variable
* getArea: Returns the area of the circle, which is calculated as:
area = pi * radius * radius
* getDiameter: Returns the diameter of the circle, which is calculated as:
diameter = radius * 2
* getCircumference: Returns the circumference of the circle, which is calculated as: circumference = 2 * pi * radius

Write a program that demonstrates the Circle class by asking the user for the circle’s radius, creating
a Circle object, and then reporting the circle’s area, diameter, and circumference.

###  Experiment 03
Design an `Inventory` class that can hold information and calculate data for items in a retail store’s inventory.

Private Member Variables

| Variable Name | Description |
|---------------|-------------|
| `itemNumber` | An `int` that holds the item’s item number. |
| `quantity` | An `int` for holding the quantity of the items on hand. |
| `cost` | A `double` for holding the wholesale per unit cost of the item. |
| `totalCost` | A `double` for holding the total inventory cost of the item (`quantity * cost`). |

Public Member Functions

| Member Function | Description |
|-----------------|-------------|
| `Inventory()` | Default constructor that sets all member variables to `0`. |
| `Inventory(int item, int qty, double c)` | Constructor that accepts item number, quantity, and cost. It stores the values and calls `setTotalCost()`. |
| `setItemNumber(int item)` | Stores the item number. |
| `setQuantity(int qty)` | Stores the quantity. |
| `setCost(double c)` | Stores the cost per item. |
| `setTotalCost()` | Calculates and stores `quantity * cost` in `totalCost`. |
| `getItemNumber()` | Returns the item number. |
| `getQuantity()` | Returns the quantity. |
| `getCost()` | Returns the cost per item. |
| `getTotalCost()` | Returns the total cost. |

Input Validation

The program should not accept negative values for:

- `itemNumber`
- `quantity`
- `cost`

If a negative value is entered, the user should be asked to enter the value again.

Example

```text id="9ic8jx"
Enter item number: 101
Enter quantity: 5
Enter cost per item: 12.5

Inventory Details
Item Number: 101
Quantity: 5
Cost per Item: 12.5
Total Cost: 62.5
```
## Week05
### Experiment 01  
Design a **Payroll** class that has data members for an employee’s hourly pay rate, number of hours worked, and total pay for the week. Write a program with an array of seven Payroll objects. The program should ask the user for the number of hours each employee has worked and will then display the amount of gross pay each has earned.  

**Input Validation:** Do not accept values greater than 60 for the number of hours worked.

### Experiment 2  
The objective of this exercise is to understand the declaration of a class with its data members and member functions, and the concept of passing objects as function parameters.  

Create a class **Travel** with two data members: `kilometer` and `hour`. Class member functions:  
- `input()` : void  
- `show()` : void  
- `add(Travel p)` : void — accepts an object of Travel as a parameter, adds the values of data members of the parameter object and the calling object, and displays the result.  

**Instructions:**  
- Declare two objects `t1` and `t2` of class Travel and input data in both objects.  
- Call the `add` function with `t1` object and pass `t2` object as an argument.
### Experiment 03 
The objective of this exercise is to understand the concept of **static data members**.  

Write a class **Capital** with one static data member `count`, which counts the number of objects created of a particular class.  

## Week 06
### Experiment 01
Write a class definition **ComplexNumber** with two data members: `realPart` and `imaginaryPart`. We wish to perform **addition, subtraction, and multiplication** with objects of the ComplexNumber class.

A complex number `c = a + bj` consists of two parts: the **real part** `a` and the **imaginary part** `bj`. We can perform arithmetic operations on complex numbers as follows:

- **Addition (+):** `(a1 + b1j) + (a2 + b2j) = (a1 + a2) + (b1 + b2)j`  
- **Subtraction (-):** `(a1 + b1j) – (a2 + b2j) = (a1 – a2) + (b1 – b2)j`  
- **Multiplication (*):** `(a1 + b1j) * (a2 + b2j) = (a1a2 – b1b2) + (a1b2 + a2b1)j`
Create objects of this class and test all the member functions.

### Experiment 02
The objective of this exercise is to how to learn the friend function of a class.
**Room**
- width : double
- printWidth(Room) : friend void
- setWidth(double) : void

**Procedure**
  
Do the exercise and create an object of the Room class and call the setWidth() function to pass
10.10 as the argument value. Later print the width of the room by calling the printWidth(Room)
function. But see this function is a friend of the Room class, so this will not be a member of the
class. Therefore we shall define it outside the class, rather than using the :: operators with the
class member function definition.

### Experiment 03
Create a class Named Student which can save student information containing Roll Number, First Name, Last
Name, Student class, Marks (can be in points) and grade. Set default values for class members in default
constructor.
Student Information to Store
- Roll Number
- First Name
- Last Name
- Student Class
- Total Marks
- Grade

All the class members will be private and no getter setters would be created to set or get the values.

- Overload constructor to initialize private class members with user provided values.
- Create a function DisplayClassData which accepts the address of class student as argument.

This function should display all data (private data members) in the function.

## Week 07
### Experiment 01
Write a program that declares a Complex data type having real and imaginary as its private members. Using
operator overloading declares an additional operator that helps in adding two complex objects. Similarly
overload the = operator to assign one value of a complex object to the other complex object. I.e. Complex c, b;
c – b; c+b; and c*b;

| Complex |
|---------|
| `double rp;` // real part of the complex number |
| `double ip;` // imaginary part of the complex number |
| `Complex(double, double)` |
| `Complex operator+(const Complex&)` |
| `Complex operator-(const Complex&)` |
| `Complex operator*(const Complex&)` |
| `void print()` |

### Experiment 02
Design a class named Month. The class should have the following private members:
- name A string object that holds the name of a month, such as “January,” “February,”
- monthNumber An integer variable that holds the number of the month. For example, January would
be 1, February would be 2, etc. Valid values for this variable are 1 through 12.

In addition, provide the following member functions:
- A default constructor that sets monthNumber to 1 and name to “January.”
- A constructor that accepts the name of the month as an argument. It should set name to the
value passed as the argument and set monthNumber to the correct value.
- A constructor that accepts the number of the month as an argument. It should set monthNumber
to the value passed as the argument and set name to the correct month name.
- Appropriate set and get functions for the name and monthNumber member variables.
- Prefix and postfix overloaded ++ operator functions that increment monthNumber and set
name to the name of next month. If monthNumber is set to 12 when these functions execute,
they should set monthNumber to 1 and name to “January.”
- Prefix and postfix overloaded − − operator functions that decrement monthNumber and set
name to the name of previous month. If monthNumber is set to 1 when these functions execute,
they should set monthNumber to 12 and name to “December.”
- Also, you should overload cout ’s << operator and cin ’s >> operator to work with the Month
class. Demonstrate the class in a program.

## Week 08
### Experiment 01
The objective of this exercise is to understand how to create derived classes. Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class Publication that stores 
- the title (a string) and
- price (type float) of a publication.
  
Book, which adds 
- a page count (type int), and

Tape, which adds 
- a playing time in minutes (type float).

Each of these three classes should have a **getdata()** function to get its data fromthe user at thekeyboard and a **putdata()** function to display its data

Write a main() program to test the Book and Tape classes by creating instances of them, askingtheuser to fill in data with getdata(), and then displaying the data with putdata().

### Experiment 02
Design a class named Employee. The class should keep the following information in
- Employee name  Employee number
- Hire date

Write one or more constructors and the appropriate accessor and mutator functions for the class. 

Next, write a class named ProductionWorker that is derived from the Employee class. The ProductionWorker class should have member variables to hold the following information: 
- Shift (an integer)
- Hourly pay rate (a double )

The workday is divided into two shifts: day and night. The shift variable will hold an integer valuerepresenting the shift that the employee works. The day shift is shift 1, and the night shift is shift 2. Writeone or more constructors and the appropriate accessor and mutator functions For the class. Demonstratetheclasses by writing a program that uses a ProductionWorker object.

### Experiment 03
In a particular factory a shift supervisor is a salaried employee who supervises a shift. In additiontoasalary, the shift supervisor earns a yearly bonus when his or her shift meets production goals. 

Design a ShiftSupervisor class that is derived from the Employee class you created in above task. The ShiftSupervisor class should have a member variable that holds the annual salary and a member variable that holds the annual production bonus that a shift supervisor has earned. 

Write one or more constructorsand the appropriate accessor and mutator functions for the class. Demonstrate the class by writing a program that uses a ShiftSupervisor object.