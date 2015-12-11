//
//  ViewController.h
//  TextFieldsTest
//
//  Created by Nikolay Berlioz on 03.12.15.
//  Copyright © 2015 Nikolay Berlioz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *firstNameField;
@property (weak, nonatomic) IBOutlet UITextField *lastNameField;

- (IBAction) actionLog:(UIButton*)sender;
- (IBAction)actionTextChanged:(UITextField *)sender;

@end

