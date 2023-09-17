//
//  RegisterViewController.swift
//  ChatX
//
//  Created by Тимур on 11.09.2023.
//

import UIKit
import FirebaseCore
import FirebaseFirestore
import FirebaseAuth
      

class RegisterViewController: UIViewController {
    @IBOutlet weak var emailTextField: UITextField!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var labelText: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        labelText.isHidden = true
        
    }
    
    @IBAction func registerButton(_ sender: UIButton) {
        
        if let email = emailTextField.text, let password = passwordTextField.text {
            Auth.auth().createUser(withEmail: email, password: password) { authResult, error in
                if let e = error {
                    print(e)
                    self.labelText.isHidden = false
                } else {
                    self.performSegue(withIdentifier: K.registerSegue, sender: self)
                }
            }
            
        }
        
        
    }
}
