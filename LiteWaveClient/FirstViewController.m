//
//  FirstViewController.m
//  TabbedTest
//
//  Created by David Anderson on 5/6/16.
//  Copyright © 2016 LiteWave LLC. All rights reserved.
//

#import "FirstViewController.h"
#import "Litewave/LWFMainController.h"

@interface FirstViewController ()

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    NSBundle* bundle = [NSBundle bundleWithURL:[[NSBundle mainBundle]URLForResource:@"LiteWave"
                                                                      withExtension:@"bundle"]];
    UIStoryboard* storyboard = [UIStoryboard storyboardWithName:@"LWFMain"
                                                         bundle:bundle];
    
    LWFMainController *controller = [storyboard instantiateViewControllerWithIdentifier:@"register"];
    [self.navigationController pushViewController:controller animated:YES];
    
    //int height = self.tabBar.frame.size.height;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}

@end
