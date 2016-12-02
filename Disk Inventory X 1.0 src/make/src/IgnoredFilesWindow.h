//
//  IgnoredFilesWindow.h
//  Disk Inventory X
//
//  Created by Dylan Chong on 3/12/16.
//
//

#import <Cocoa/Cocoa.h>

@interface IgnoredFilesWindow : NSWindow <NSWindowDelegate> {
    NSTextView *ignoredPathsTextView;
}

@property (assign) IBOutlet NSTextView *ignoredPathsTextView;

@end
