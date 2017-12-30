/*
Aerith starts out on cloud  with energy level . She can use  unit of energy to make a jump of size  to cloud , and she jumps until she gets back to cloud . If Aerith lands on a thundercloud, her energy () decreases by  additional units. The game ends when Aerith lands back on cloud .

Given the values of , , and the configuration of the clouds, can you determine the final value of  after the game ends?
*/

import Foundation

// Enter your code here 

var getFirstLine = readLine()
var numberOfCloud = Int()
var jumpDistance  = Int()
if let getFirstLine  = getFirstLine {
    let inputNumofCloundAndJump = getFirstLine.split(separator: " ")
    let numbers = inputNumofCloundAndJump.map { Int(String($0))!}
    
    //let inputNumberCharacters = input.characters.split(separator: " ")
    //let numbers = inputNumberCharacters.map { Int(String($0))! }
    numberOfCloud = numbers[0];
    jumpDistance  = numbers[1];
}

var getSecondLine = readLine()
var cloudValuesArray = [Int]()
if let getSecondLine = getSecondLine {
    let inputCloudValues = getSecondLine.split(separator:" ")
    cloudValuesArray = inputCloudValues.map { Int(String($0))!}
}

var energyLeft = 100
var index = 0;
while (index <= numberOfCloud-1){
    index = (index + jumpDistance)%numberOfCloud
    let currentCloud = cloudValuesArray[index]
    
    if (currentCloud == 0){
        energyLeft = energyLeft - 1
    }
    else if (currentCloud == 1) {
        energyLeft = energyLeft - 3
    }
       
    if(index == 0) {
        break;
    }
}

print(energyLeft)
