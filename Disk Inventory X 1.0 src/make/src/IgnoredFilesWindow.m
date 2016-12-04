//
//  IgnoredFilesWindow.m
//  Disk Inventory X
//
//  Created by Dylan Chong on 3/12/16.
//
//

#import "IgnoredFilesWindow.h"

@implementation IgnoredFilesWindow
@synthesize ignoredPathsTextView;

- (NSArray *)getIgnoredPaths {
    return @[@"test", @"something"];
}

- (void) setDelegate:(id<NSWindowDelegate>)delegate {
    NSLog(@"Setting delegate");
    
}

@end
