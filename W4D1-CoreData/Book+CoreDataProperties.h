//
//  Book+CoreDataProperties.h
//  W4D1-CoreData
//
//  Created by Daniel Mathews on 2015-07-20.
//  Copyright © 2015 Daniel Mathews. All rights reserved.
//
//  Delete this file and regenerate it using "Create NSManagedObject Subclass…"
//  to keep your implementation up to date with your model.
//

#import "Book.h"

NS_ASSUME_NONNULL_BEGIN

@interface Book (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) Author *author;

@end

NS_ASSUME_NONNULL_END
