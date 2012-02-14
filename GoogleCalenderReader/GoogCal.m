//
//  GoogCal.m
//  Election Map 2012
//
//  Created by Kurt Sparks on 2/1/12.
//  Copyright (c) 2012 none. All rights reserved.
//

#import "GoogCal.h"

@implementation GoogCal
@synthesize Title,Description, EndDate, StartDate;


-(void)dealloc
{
    [Title release];
    [Description release];
    [EndDate release];
    [StartDate release];
   
    
    [super dealloc];
    
}

@end
