//
//  iSystemMasterViewController.h
//  iSystem
//
//  Created by Levin Alexander on 3/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iSystemDetailViewController;

#import <CoreData/CoreData.h>

@interface iSystemMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) iSystemDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
