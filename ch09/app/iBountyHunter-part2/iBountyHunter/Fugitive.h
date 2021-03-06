//
//  Fugitive.h
//  iBountyHunter
//
//  Created by Dan Pilone on 3/13/11.
//  Copyright (c) 2011 Element 84, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Fugitive : NSManagedObject {
@private
}
@property (nonatomic, retain) NSDecimalNumber * bounty;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * fugitiveID;
@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSNumber * captured;
@property (nonatomic, retain) NSDate * captdate;

@end
