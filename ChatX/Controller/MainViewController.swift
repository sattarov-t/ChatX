//
//  ViewController.swift
//  ChatX
//
//  Created by Тимур on 11.09.2023.
//

import UIKit

class MainViewController: UIViewController {
    @IBOutlet weak var logoText: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        logoText.text = ""
        var charIndex = 0.0
        let titleText = "CHAT X"
        for label in titleText {
            Timer.scheduledTimer(withTimeInterval: 0.1 * charIndex, repeats: false) { timer in
                self.logoText.text?.append(label)
            }
            charIndex += 1
        }

    }
    
    @IBAction func registerButton(_ sender: UIButton) {
    }
    
    @IBAction func loginButton(_ sender: UIButton) {
    }
    
}

