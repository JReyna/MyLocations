//
//  Location.h
//  MyLocations
//
//  Created by James Reyna on 12/21/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Location : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) UNKNOWN_TYPE longitude;
@property (nonatomic, retain) NSString * date;
@property (nonatomic, retain) UNKNOWN_TYPE locationDescription;
@property (nonatomic, retain) id category;
@property (nonatomic, retain) UNKNOWN_TYPE placemark;

@end
