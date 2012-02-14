//
//  CalendarTableViewController.h
//  Election Map 2012
//
//  Created by Kurt Sparks on 2/1/12.
//  Copyright (c) 2012 none. All rights reserved.
//



#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0) //1
#define kGoogleCalendarURL [NSURL URLWithString:  @"http://www.google.com/calendar/feeds/developer-calendar@google.com/public/full?alt=json&orderby=starttime&max-results=15&singleevents=true&sortorder=ascending&futureevents=true"]
#import <Foundation/NSJSONSerialization.h> 
#import <UIKit/UIKit.h>
#import "GoogCal.h"
#import <EventKit/EventKit.h>

@interface CalendarTableViewController : UITableViewController<UIActionSheetDelegate>
{
     NSMutableArray *_EventArray;
     UIActionSheet *AddEventSheet;
     NSInteger selectedRow;
}

@property (nonatomic, retain) NSMutableArray *EventArray;
@property (nonatomic, assign) NSInteger selectedRow;

-(void)LoadCalendarData;
-(void)AddEventToCalendar;
-(IBAction)cancel:(id)sender;
@end


