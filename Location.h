//
//  Location.h
//  MyLocations
//
//  Created by James Reyna on 12/21/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Location : NSManagedObject <MKAnnotation>

@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *locationDescription;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) CLPlacemark *placemark;

@end
