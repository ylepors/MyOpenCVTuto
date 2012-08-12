//
//  MasterViewController.h
//  MyOpenCVTuto
//
//  Created by Yves Le Pors on 12/08/12.
//  Copyright (c) 2012 Yves Le Pors. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
