/*
Task 
Complete the code in the editor below. The variables , , and  are already declared and initialized for you. You must:

Declare  variables: one of type int, one of type double, and one of type String.
Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  variables.
Use the  operator to perform the following operations: 
Print the sum of  plus your int variable on a new line.
Print the sum of  plus your double variable to a scale of one decimal place on a new line.
Concatenate  with the string you read as input and print the result on a new line.
*/


var i = 0;
var d = 4.0;
var s = "HackerRank"
// Declare second integer, double, and String variables.

// Read and save an integer, double, and String to your variables.
if let i2 = Int(readLine()!) {
    print(i+i2)
}
if let d2 = Double(readLine()!) {
    print(d + d2)
}
if let s2 = readLine() {
    print(s + s2)
}
