//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSMutableString, NSPipe, NSTask;

@interface NTTaskController : NSObject
{
    id _delegate;
    NSTask *_task;
    NSPipe *_outputPipe;
    NSPipe *_errorPipe;
    NSPipe *_inputPipe;
    NSFileHandle *_errorReadHandle;
    NSFileHandle *_ouputReadHandle;
    NSFileHandle *_inputWriteHandle;
    BOOL _sendOutput;
    BOOL _sendError;
    BOOL _sendFinished;
    BOOL _result;
    BOOL _taskDone;
    NSMutableString *_outputCache;
    BOOL _delayedOutputProcessing;
    BOOL _bufferOutputToDelegateWithDelay;
}

+ (BOOL)synchronousTask:(id)arg1 toolPath:(id)arg2 directory:(id)arg3 withArgs:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)runTask:(BOOL)arg1 toolPath:(id)arg2 directory:(id)arg3 withArgs:(id)arg4;
- (void)runTaskWithInput:(BOOL)arg1 toolPath:(id)arg2 directory:(id)arg3 withArgs:(id)arg4 input:(id)arg5;
- (BOOL)taskResult;
- (BOOL)isRunning;
- (void)stopTask;
- (void)taskOutputAvailable:(id)arg1;
- (void)taskErrorsAvailable:(id)arg1;
- (void)taskDidTerminate:(id)arg1;
- (void)setBufferOutputToDelegateWithDelay:(BOOL)arg1;
- (BOOL)bufferOutputToDelegateWithDelay;

@end
