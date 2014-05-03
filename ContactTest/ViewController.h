//
//  ViewController.h
//  ContactTest
//
//  Created by Patrick Planchamp on 01.05.14.
//  Copyright (c) 2014 Patrick Planchamp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController<ABPeoplePickerNavigationControllerDelegate>
- (IBAction)selectContact:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *firstName;
@property (weak, nonatomic) IBOutlet UILabel *phoneNumber;

@end
