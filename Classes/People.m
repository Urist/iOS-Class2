//
//  People.m
//  Class2
//
//  Created by Joe on 5/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "People.h"


@implementation People

- (id) init
{
	self = [super init];
	if (self != nil) {
		peopleArray = [[NSMutableArray alloc] init];
	}
	return self;
}

- (void) dealloc
{
	[peopleArray release];
	[super dealloc];
}

- (NSArray *)peopleArray{
	return [NSArray arrayWithArray:peopleArray];
}

- (void)addPerson:(Person *)aPerson {
	[peopleArray addObject:aPerson];
}

- (void)removePerson:(Person *)aPerson {
	[peopleArray removeObject:aPerson];
}


- (Person *)lastPerson {
	return [peopleArray lastObject];
}

- (Person *)personAtIndex:(NSInteger)index{
	return [peopleArray objectAtIndex:index];
}

- (int)numberOfPeople {
	return [peopleArray count];
}

- (BOOL)isPersonInPeople:(Person *)aPerson{
	return [peopleArray containsObject:aPerson];
}


@end
