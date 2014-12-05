//
//  ShowViewController.h
//  Day2
//
//  Created by Faik Catibusic on 12/4/14.
//  Copyright (c) 2014 Academy387. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"

@interface ShowViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@property User* user;

-(void)setNewUser:(User*)userToShow;

@end
