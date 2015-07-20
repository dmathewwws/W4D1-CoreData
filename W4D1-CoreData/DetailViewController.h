//
//  DetailViewController.h
//  W4D1-CoreData
//
//  Created by Daniel Mathews on 2015-07-20.
//  Copyright (c) 2015 Daniel Mathews. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

