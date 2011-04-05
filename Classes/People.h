//
//  People.h
//  Class2
//
//  Created by Joe on 5/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>
#import "Person.h"

@interface People : NSObject {
	NSMutableArray *peopleArray;
}

- (NSArray *)getPeopleArray;

- (void)addPerson:(Person *)aPerson;
- (void)removePerson:(Person *)aPerson;

- (Person *)lastPerson;
- (int)numberOfPeople;
- (BOOL)isPersonInPeople:(Person *)aPerson;

@end
