//
//  Person.h
//  Class2
//
//  Created by Joe on 22/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Person : NSObject {
	NSString *name;
	int age;
}

@property (retain) NSString *name;
@property (assign) int age;

@end
