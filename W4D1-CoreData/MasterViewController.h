//
//  MasterViewController.h
//  W4D1-CoreData
//
//  Created by Daniel Mathews on 2015-07-20.
//  Copyright (c) 2015 Daniel Mathews. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

