//
//  Class2AppDelegate.h
//  Class2
//
//  Created by Joe on 22/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "People.h"

@interface Class2AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	People *peopleManager;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

