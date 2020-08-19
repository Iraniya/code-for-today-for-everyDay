import UIKit
import Foundation

//Warmm up

//HackerRank Interview Prepration Kit questions and solutions using swift Language

// 1. Complete the sockMerchant function below.
func sockMerchant(n: Int, ar: [Int]) -> Int {
    var result = 0;
    var d: [Int:Int] = [:]
    for color in ar {
        if let value = d[color], value > 0 {
            result = result + 1
            d[color] = nil
        } else {
            d[color] = 1
        }
    }
    return result
}

// 2. Complete the countingValleys function below.
func countingValleys(n: Int, s: String) -> Int {
    var answer = 0
    var temp = 0
    for index in s {
        if index == "D" {
            temp = temp - 1
        } else {
            temp = temp + 1
        }
        if temp == 0 && index == "U" {
            answer = answer + 1

        }
    }
    return answer
}

// 3. Complete the jumpingOnClouds function below.
func jumpingOnClouds(c: [Int]) -> Int {
    let n = c.count
    var index = 0
    var numOfJumps = 0
    while(index < n) {
        if index + 2 < n {
            if c[index + 2] == 0 {
                numOfJumps = numOfJumps + 1
                index = index + 2
            } else if c[index + 1] == 0 {
                numOfJumps = numOfJumps + 1
                index = index + 1
            } else {
                index = n
            }
        } else if index + 1 < n {
            if c[index + 1] == 0 {
                numOfJumps = numOfJumps + 1
                index = index + 1
            } else {
                index = n
            }
        } else {
            index = n
        }
    }
    
    return numOfJumps
}


// 4. Complete the repeatedString function below.
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

//let answer = repeatedString(s: "aba", n: 10)


//----------------------------//------------------------------------

//Arrays:

//1. Left Rotation

// Complete the rotLeft function below.
func rotLeft(a: [Int], d: Int) -> [Int] {
    var newArray = a
    for oldIndex in 0...a.count - 1 {
        let newIndex = (oldIndex + a.count - d) % a.count
        newArray[newIndex] = a[oldIndex]
    }
    return newArray
}

//let newArray = rotLeft(a: [1,2,3,4,5], d: 4)


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

//minimumBribes(q: [2, 5, 1, 3, 4])


//-----------------------------//------------------------//

//Dictionaries and Hashmaps

// 1. Complete the checkMagazine function below.
func checkMagazine(magazine: [String], note: [String]) -> Void {
    var magDict:[String:Int] = [:]
    magazine.forEach{magDict[$0, default:0] += 1}
   
    var noteDict: [String: Int] = [:]
    note.forEach{ noteDict[$0, default:0] += 1}
    
    var flag = true
    for (word, noteCount) in noteDict {
        if let magCount = magDict[word], magCount >= noteCount {
            continue
        } else {
            flag = false
            break
        }
    }
    
    if flag {
        print("Yes")
    } else {
        print("No")
    }
}

//let check =  checkMagazine(magazine: ["give", "me", "one", "grand", "today", "night"], note: ["give", "one","one", "grand", "today"])


// 2. Complete the twoStrings function below.
func twoStrings(s1: String, s2: String) -> String {
    var s1Dict: [Character: Int] = [:]
    s1.forEach{ s1Dict[$0, default: 0] += 1}
    
    var s2Dict: [Character: Int] = [:]
    s2.forEach{ s2Dict[$0, default: 0] += 1}
    
    for (word, _) in s1Dict {
        if let _ =  s2Dict[word] {
            return "YES"
        }
    }
    
    return "NO"
}
//let check = twoStrings(s1: "hi", s2: "world")

// 3.Complete the sherlockAndAnagrams function below.
func sherlockAndAnagrams(s: String) -> Int {

    return 0
}


//===============================//================
//Sorting


//1. Bubble Sort
// Complete the countSwaps function below.
func countSwaps(a: [Int]) -> Void {
    var newA = a
    let n = newA.count
    var numOfSwaps = 0
    for _ in 0..<n {
        for j in 0..<(n - 1) {
            if newA[j] > newA[j + 1] {
                newA.swapAt(j, j+1)
                numOfSwaps = numOfSwaps + 1
            }
        }
    }
    
    print("Array is sorted in \(numOfSwaps) swaps.")
    print("First Element: \(newA.first!)")
    print("Last Element: \(newA.last!)")  //n >= 2 so there will always be first and last elements so we can force unwrap it.
}

//countSwaps(a: [3,2,1])

// 2. Complete the maximumToys function below.
func maximumToys(prices: [Int], k: Int) -> Int {
    var k = k
    var max_toy = 0
    if prices.count == 0 || k == 0 { return max_toy}
    
    let prices = prices.sorted()
    
    for toy in prices {
        k = k - toy
        if k < 0  { return max_toy}
        max_toy = max_toy + 1
    }
    return max_toy
}

//let maxToy = maximumToys(prices: [1,12,5,111,200,1000,10], k: 50)

