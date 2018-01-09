import Foundation

// Enter your code here

var getFirstLine = readLine()
var numberOfCloud = 8
var jumpDistance  = 2
//if let getFirstLine  = getFirstLine {
//    let inputNumofCloundAndJump = getFirstLine.characters.split(separator: " ")
//    let numbers = inputNumofCloundAndJump.map { Int(String($0))!}
//    
//    //let inputNumberCharacters = input.characters.split(separator: " ")
//    //let numbers = inputNumberCharacters.map { Int(String($0))! }
//    numberOfCloud = numbers[0];
//    jumpDistance  = numbers[1];
//    
//    print(numberOfCloud)
//    print(jumpDistance)
//}
//
//var getSecondLine = readLine()
var cloudValuesArray = [0,0,1,0,0,1,1,0]
//if let getSecondLine = getSecondLine {
//    let inputCloudValues = getSecondLine.characters.split(separator:" ")
//    cloudValuesArray = inputCloudValues.map { Int(String($0))!}
//    
//    print(cloudValuesArray)
//}

var energyLeft = 100
var index = 0;
while (index <= numberOfCloud-1) {
    index = (index + jumpDistance)%numberOfCloud
    var currentCloud = cloudValuesArray[index]
    
    if (currentCloud == 0){
        energyLeft = energyLeft - 1
    }
    else if (currentCloud == 1) {
        energyLeft = energyLeft - 3
    }
    
    if (index == 0) {
        break;
    }
}


print(energyLeft)

