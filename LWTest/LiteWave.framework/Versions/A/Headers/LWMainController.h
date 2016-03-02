//
//  LiteWaveController.h
//  LiteWave
//
//  Copyright (c) 2013 LiteWave. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LWAppDelegate.h"

@interface LWMainController : UIViewController {
    IBOutlet UILabel *unavailableLabel;
    IBOutlet UILabel *poweredByLabel;
    IBOutlet UIImageView *logoImageView;
    IBOutlet UIImageView *imageView;
}

@property (nonatomic, retain) LWAppDelegate *appDelegate;

- (void)getEvent;
- (void)clearEvent;
- (void)saveEvent:(id)event;
- (void)updateDefaults;
- (void)beginEvent:(NSString*)eventID;
- (void)handleNoEvent;
- (void)onBecomeActive;

@end
