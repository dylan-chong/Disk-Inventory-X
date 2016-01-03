//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSDate, NSMutableArray, NSMutableString, NSString, NTTaskController, NTTaskOutputParser;

@interface NTTaskProgressPanel : NSWindowController
{
    id window;
    id progressBar;
    id progressText;
    id infoText;
    id stopButton;
    NTTaskController *_taskController;
    NTTaskOutputParser *_outputParser;
    NSString *_destName;
    NSMutableArray *_taskOutput;
    NSMutableString *_taskErrors;
    NSString *_progressFormatString;
    NSDate *_lastUpdate;
    BOOL _windowShown;
    id _delegate;
}

- (id)initWithWindowTitle:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)runTask:(id)arg1 directory:(id)arg2 withArgs:(id)arg3;
- (void)awakeFromNib;
- (void)doShowWindow;
- (void)updateProgress:(id)arg1 message:(id)arg2 info:(id)arg3;
- (void)stopAction:(id)arg1;
- (void)delegate_handleTaskOutput:(id)arg1;
- (void)delegate_handleTaskErrors:(id)arg1;
- (void)delegate_handleTaskFinished:(id)arg1;
- (void)windowWillClose:(id)arg1;

@end
