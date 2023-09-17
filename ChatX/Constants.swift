//
//  Constants.swift
//  ChatX
//
//  Created by Тимур on 14.09.2023.
//

import Foundation

struct K {
    static let cellIdentifier = "ReusableCell"
    static let cellNibName = "MessageCell"
    static let registerSegue = "registerToChat"
    static let loginSegue = "loginToChat"
    
    struct FStore {
        static let collectionName = "messages"
        static let senderField = "sender"
        static let bodyField = "body"
        static let dateField = "date"
    }
}
