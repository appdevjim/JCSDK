//
//  NSMutableArray+Queue.h
//  JCSDK
//
//  Created by James Cervone on 9/2/13.
//  Copyright (c) 2013 Jim Cervone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (Queue)

- (void)enqueue:(id)item;
- (id)dequeue;

@end
