//
//  DetailViewController.h
//  Class2
//
//  Created by Joe on 10/05/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface DetailViewController : UIViewController {
	Person *myPerson;
	
	IBOutlet UILabel *nameLabel;
}

@property (assign) Person *myPerson;

@end
