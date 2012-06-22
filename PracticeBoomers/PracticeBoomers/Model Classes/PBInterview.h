//
//  PBInterview.h
//  PracticeBoomers
//
//  Created by parasappa yaragal on 20/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PBInterview : NSObject
@property (nonatomic,retain) NSString *subject;
@property (nonatomic,retain) NSString *interviewerName;
@property (nonatomic,retain) NSString *intervIewDate;
@property (nonatomic,retain) NSString *interViewDuration;
@property (nonatomic,retain) NSString *thumbURL;
@property (nonatomic,retain) NSString *ratings;
@property (nonatomic,retain) NSArray  *comments;

@end
