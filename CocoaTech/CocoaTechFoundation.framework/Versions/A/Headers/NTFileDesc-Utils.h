//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CocoaTechFoundation/NTFileDesc.h>

@interface NTFileDesc (Utils)
+ (unsigned long long)volumeTotalBytes:(id)arg1;
+ (unsigned long long)volumeFreeBytes:(id)arg1;
+ (id)descsToPaths:(id)arg1;
+ (id)pathsToDescs:(id)arg1;
+ (id)applicationForExtension:(id)arg1;
+ (id)kindStringForExtension:(id)arg1;
+ (id)applicationForType:(unsigned long)arg1 creator:(unsigned long)arg2 extension:(id)arg3;
+ (id)removeDescsWithParentInList:(id)arg1;
@end

