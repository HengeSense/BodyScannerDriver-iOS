//
//  BSDMasterViewController.h
//  BodyScannerDriver
//
//  Created by Brian Doherty on 8/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BSDDetailViewController;

@interface BSDMasterViewController : UITableViewController

@property (strong, nonatomic) BSDDetailViewController *detailViewController;

@end
