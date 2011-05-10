//
//  PeopleTableViewController.h
//  Class2
//
//  Created by Joe on 10/05/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "People.h"

@interface PeopleTableViewController : UITableViewController {
	People *peopleManager;
}

@property (assign) People *peopleManager;

@end
