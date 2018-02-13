//
//  Bogosort.swift
//  Bogosort implementation in Swift. Do not use in real projects. :)
//
//  Created by Azarov Alex on 16-07-16.
//
//

import Foundation

extension Array where Element: Comparable {
    mutating func bogosort() {
        while !self.isSorted() {
            self.shuffle()
        }
    }

    mutating func shuffle() {
        self.sort { (_, _) -> Bool in
            return arc4random() % 2 == 0
        }
    }

    func isSorted() -> Bool {
        for i in 0..<(self.count - 1) {
            if self[i] > self[i+1] {
                return false
            }
        }
        return true
    }
}

var arr = [1, 5, 3, 9, 4, 6]
arr.bogosort()
print(arr)
