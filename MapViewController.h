//
//  MapViewController.h
//  MyLocations
//
//  Created by James Reyna on 1/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

@interface MapViewController : UIViewController <MKMapViewDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, strong) IBOutlet MKMapView *mapView;

- (IBAction)showUser;
- (IBAction)showLocations;

@end