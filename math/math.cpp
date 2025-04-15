// math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <iomanip>

namespace std {;

int main() {
    
 //create a random number generator
 random_device rd;
 mt19937 gen(rd());

 //define the range for 3-digit number (100,999)
 uniform_int_distribution<> dist(100, 999);

 //generate two random 3-digit numbers
 int num1 = dist(gen);
 int num2 = dist(gen);

 //display the problem in a format of a Math Tutor 
 //using setw(3) is to reserve 3 character spaces for a value when its on the output.
 cout << "   " << setw(3) << num1 << endl;
 cout << " + " << setw(3) << num2 << endl; 
 cout << "-----" << endl;

 // get user input 
 int userAnswer;
 cin >> userAnswer;

 // making the correct answer equal to the user answer to make sure that they match will state that the answer is correct and by 
 //using the else if method it will allow to print out "the answer is incorrect". 

 int correctAnswer = num1 + num2;

 if (userAnswer == correctAnswer)
 {
     cout << "Correct, try a couple more." << endl;

 }
 //it will display to the user that the answer is incorrect and including the input of the correctanswer will display the correct answer to the user. 
 else {
     cout << " Oh Oh ! The correct answer is" << correctAnswer << "." << endl;
 }

    return 0;
}
