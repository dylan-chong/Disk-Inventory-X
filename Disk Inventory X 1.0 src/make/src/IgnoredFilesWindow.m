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

- (void) windowWillClose:(NSNotification *)notification {
    NSLog(@"About to close window");
}

@end
