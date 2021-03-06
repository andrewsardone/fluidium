//
//  NSPasteboard+FUAdditions.m
//  Fluidium
//
//  Created by Todd Ditchendorf on 12/22/09.
//  Copyright 2009 Todd Ditchendorf. All rights reserved.
//

#import "NSPasteboard+FUAdditions.h"
#import "WebURLsWithTitles.h"

@implementation NSPasteboard (FUAdditions)

- (BOOL)hasURLs {
    return ([self hasWebURLs] || [[self types] containsObject:NSURLPboardType]);
}


- (BOOL)hasWebURLs {
    return [[self types] containsObject:WebURLsWithTitlesPboardType];
}

@end
