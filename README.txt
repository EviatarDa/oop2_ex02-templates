EX2: "Form filling"

Names:

Eviatar Davidyan  207259755
Shir Yadid  208327957

Practice templates

General explanation of the exercise:

In this exercise we built a terminal application that is used to fill out a flight registration form. The user enters a number of personal details as well as details of the intended flight. The software verifies that the details are correct, including verification of the flight details against the information known in advance about existing options.
The program shows the user field by field asking him to fill in the required details. All fields are mandatory and if you don't fill them all in, the program will wait.
After the user has finished filling out the form, the program checks the correctness of the fields.
If there are incorrect fields, the program will show the user a message about it, and will display all the fields he entered, with an appropriate error appearing next to the problematic fields. Now the program will ask the user to re-enter the incorrect fields.
If all fields are correct, the program will display a message acknowledging the registration, display the information you entered, and exit.

The departments:

BaseField - parent class, from which the Field class inherits
ValueToNames - responsible for converting a number into appropriate text
FormValidator - inherits the classes of the entire form.
Form The form class that has a vector of fields as well as appropriate validators for the entire form.
Validator - inherits the classes NoDigitValidator, IdValidator, NoDigitValidator, RangeValidator



Main data structures and their functions
Vectors <vector> to save the fields and the validators



Noteworthy algorithms -
Known bugs -
Other notes -