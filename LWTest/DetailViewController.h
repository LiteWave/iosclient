//
//  DetailViewController.h
//  SimpleTest
//
//  Created by David Anderson on 11/9/15.
//  Copyright © 2015 LiteWave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LiteWave/LiteWave.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

