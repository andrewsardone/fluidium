//  Copyright 2009 Todd Ditchendorf
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Cocoa/Cocoa.h>

@interface FUHistoryController : NSObject 
#if defined(MAC_OS_X_VERSION_10_6) && (MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_6)
<NSMenuDelegate>
#endif
{
    NSString *webHistoryFilePath;
    NSMutableArray *historyMenuObjects;
    NSUInteger numIndividualItems;
    BOOL firstHistoryDateIsToday;
}

+ (id)instance;

- (IBAction)historyItemClicked:(id)sender;

- (void)save;

@property (nonatomic, copy) NSString *webHistoryFilePath;
@property (nonatomic, retain) NSMutableArray *historyMenuObjects;
@end
