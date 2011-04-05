//
//  People.m
//  Class2
//
//  Created by Joe on 5/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "People.h"


@implementation People

- (void)addPerson:(Person *)aPerson {
	[peopleArray addObject:aPerson];
}

- (void)removePerson:(Person *)aPerson {
	[peopleArray removeObject:aPerson];
}


- (Person *)lastPerson {
	[peopleArray removeLastObject];
}

- (int)numberOfPeople {
	[peopleArray count];
}

- (BOOL)isPersonInPeople:(Person *)aPerson{
	[peopleArray containsObject:aPerson];
}


@end
