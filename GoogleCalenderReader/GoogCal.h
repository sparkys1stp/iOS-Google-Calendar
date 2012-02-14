//
//  GoogCal.h
//  Election Map 2012
//
//  Created by Kurt Sparks on 2/1/12.
//  Copyright (c) 2012 none. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GoogCal : NSObject
{
    NSString *Title;
    NSDate *StartDate;
    NSDate *EndDate;
    NSString *Description;
}

@property (nonatomic, retain) NSString *Title;
@property (nonatomic, retain) NSDate *StartDate;
@property (nonatomic, retain) NSDate *EndDate;
@property (nonatomic, retain) NSString *Description;


@end
