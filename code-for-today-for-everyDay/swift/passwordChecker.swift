import Foundation

// Enter your code here 

let numbersCharacterSet = CharacterSet(charactersIn:"0123456789")
let lower_caseCharacterSet = CharacterSet(charactersIn:"abcdefghijklmnopqrstuvwxyz")
let upper_caseCharacterSet = CharacterSet(charactersIn:"ABCDEFGHIJKLMNOPQRSTUVWXYZ")
let special_charactersCharacterSet = CharacterSet(charactersIn:"!@#$%^&*()-+")

var numberOfCharacters = Int(readLine()!)
var inputPassword = readLine()

var numberOfCharactersMissing = 0;
if let numberOfCharacters = numberOfCharacters, numberOfCharacters >= 0 {
    if let inputPassword = inputPassword {
    print(inputPassword)
        if inputPassword.rangeOfCharacter(from: numbersCharacterSet.inverted) != nil {
            numberOfCharactersMissing += 1;
            print("number")
        }
        if inputPassword.rangeOfCharacter(from: lower_caseCharacterSet.inverted) != nil {
            numberOfCharactersMissing += 1;
            print("lower")
        }
        if inputPassword.rangeOfCharacter(from: upper_caseCharacterSet.inverted) != nil {
            numberOfCharactersMissing += 1
            print("uper")
        }
        if inputPassword.rangeOfCharacter(from: special_charactersCharacterSet.inverted) != nil {
            numberOfCharactersMissing += 1;
            print("special")
        }
        
        
    }
}
else {
    numberOfCharactersMissing = 6;
}

print(numberOfCharactersMissing)

if (inputPassword!.rangeOfCharacterFromSet(special_charactersCharacterSet.invertedSet).location != NSNotFound){
    println("Could not handle special characters")
}
