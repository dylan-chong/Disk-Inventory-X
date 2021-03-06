//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTFileDesc;

@interface NTDirectorySubscription : NSObject
{
    BOOL _isValid;
    NTFileDesc *_directory;
    int _referenceCount;
    struct OpaqueFNSubscriptionRef *_subscription;
    BOOL _subscribeHackEnabled;
}

+ (id)observer:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (id)initWithDirectory:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)dealloc;
- (BOOL)isValid;
- (id)directory;
- (void)incrementRefCount;
- (void)decrementRefCount;
- (int)refCount;
- (void)volumeListChangedNotification:(id)arg1;
- (void)sendNotification;

@end

