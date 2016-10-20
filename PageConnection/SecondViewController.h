//
//  SecondViewController.h
//  PageConnection
//
//  Created by Prasidh srikanth on 10/19/16.
//  Copyright © 2016 Prasidh srikanth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>

@interface SecondViewController : UIViewController

@property (nonatomic, strong) IBOutlet FBSDKLoginButton *loginButton;
@property (nonatomic, strong) IBOutlet UIButton *continueButton;

- (IBAction)showLogin:(UIStoryboardSegue *)segue;

@end
