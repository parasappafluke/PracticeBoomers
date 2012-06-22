//
//  PBCommentsProtocol.h
//  PracticeBoomers
//
//  Created by parasappa yaragal on 20/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PBComment;
@protocol PBCommentsProtocol
- (void)commentsController:(id<PBCommentsProtocol>)sender didUpdateComment:(PBComment*)comment;
- (void)commentsController:(id<PBCommentsProtocol>)sender didFailedToUpdateComment:(NSError*)error;
@end

