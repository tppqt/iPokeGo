//
//  PokeStop+CoreDataClass.h
//  iPokeGo
//
//  Created by Curtis herbert on 7/30/16.
//  Copyright © 2016 Dimitri Dessus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN

@interface PokeStop : NSManagedObject

@property (readonly) CLLocationCoordinate2D location;
- (void)syncToValues:(NSDictionary *)values;

@end

NS_ASSUME_NONNULL_END

#import "PokeStop+CoreDataProperties.h"
