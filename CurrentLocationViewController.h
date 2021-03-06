//
//  FirstViewController.h
//  MyLocations
//
//  Created by James Reyna on 12/14/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@interface CurrentLocationViewController : UIViewController <CLLocationManagerDelegate>

@property (strong, nonatomic) IBOutlet UILabel *messageLabel;
@property (nonatomic, strong) IBOutlet UILabel *latitudeLabel;
@property (nonatomic, strong) IBOutlet UILabel *longitudeLabel;
@property (nonatomic, strong) IBOutlet UILabel *addressLabel;
@property (nonatomic, strong) IBOutlet UIButton *tagButton;
@property (nonatomic, strong) IBOutlet UIButton *getButton;
@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) IBOutlet UILabel *latitudeTextLabel;
@property (nonatomic, strong) IBOutlet UILabel *longitudeTextLabel;
@property (nonatomic, strong) IBOutlet UIView *panelView;

- (IBAction)getLocation:(id)sender;


@end
