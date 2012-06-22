//
//  PBLesson.h
//  PracticeBoomers
//
//  Created by parasappa yaragal on 20/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PBLesson : NSObject
@property (nonatomic,retain) NSString *name;
@property (nonatomic,retain) NSString *description;
@property (nonatomic,retain) NSString *createdDate;
@property (nonatomic,retain) NSString *uploadedDate;
@property (nonatomic,retain) NSString *thumbURL;
@property (nonatomic,retain) NSString *videoURL;
@property (nonatomic,retain) NSNumber *ratings;
@property (nonatomic,retain) NSArray  *comments;
@property (nonatomic,assign) BOOL      isFavorite;
@property (nonatomic,assign) BOOL      didWatched;//to keep the video watch status


@end
