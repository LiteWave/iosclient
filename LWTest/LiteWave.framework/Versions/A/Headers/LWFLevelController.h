//
//  LevelController.h
//  LiteWave
//
//  Copyright (c) 2015 LightWave. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LWFAppDelegate.h"

@interface LWFLevelController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    
    IBOutlet UIActivityIndicatorView *spinner;
    IBOutlet UILabel *descriptionLabel;
    IBOutlet UITableView *viewTable;
    IBOutlet UIImageView *imageView;
    
    NSMutableArray *levels;
    NSDictionary *levelDictionary;
    
    int selectedLevelIndex;
}

@property (nonatomic, retain) LWFAppDelegate *appDelegate;

@end
