//
//  People.h
//  Class2
//
//  Created by Joe on 5/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

@interface People : NSObject {
	NSMutableArray *peopleArray;
}

- (NSArray *)peopleArray;

- (void)addPerson:(Person *)aPerson;
- (void)removePerson:(Person *)aPerson;
- (Person *)lastPerson;
- (Person *)personAtIndex:(NSInteger)index;

- (int)numberOfPeople;
- (BOOL)isPersonInPeople:(Person *)aPerson;

@end
