import UIKit
import Foundation

//Warmm up

/*
// Complete the repeatedString function below.
func repeatedString(s: String, n: Int) -> Int {
    var totalCount = 0
    let stringLength = s.count
    let numberOfTimes = n/stringLength
    let remainingCount = n % stringLength
    
    let numOfOccurrencesInSingleString = s.components(separatedBy: "a").count - 1
    let remaingOccurrences = s.prefix(remainingCount).components(separatedBy: "a").count - 1
    totalCount = (numOfOccurrencesInSingleString * numberOfTimes) + remaingOccurrences
    
    return totalCount
}

let answer = repeatedString(s: "aba", n: 10)

*/



//Arrays:

/* 1. Left Rotation

import Foundation

// Complete the rotLeft function below.
func rotLeft(a: [Int], d: Int) -> [Int] {

    var newArray = a
    for oldIndex in 0...a.count - 1 {
        let newIndex = (oldIndex + a.count - d) % a.count
        newArray[newIndex] = a[oldIndex]
    }
    
    return newArray

}

let newArray = rotLeft(a: [1,2,3,4,5], d: 4)

 */

/*
//2. New Year Chaos

func minimumBribes(q: [Int]) -> Void {
    var array = q
    var swapCount = 0;
    let n = array.count - 1
    for i in (0...n).reversed() {
        //print(i)
        if array[i] != i + 1 {
            if (((i - 1) >= 0) && array[i - 1] == (i + 1)) {
                swapCount = swapCount + 1
                array.swapAt(i, i-1)
            } else if (((i - 2) >= 0) && array[i - 2] == (i + 1)) {
                swapCount = swapCount + 2
                array.swapAt(i-2, i-1)
                array.swapAt(i-1,i)
            } else {
                print("Too chaotic")
                return
            }
        }
    }
    print(swapCount)

}

let count = minimumBribes(q: [2, 5, 1, 3, 4])
*/


