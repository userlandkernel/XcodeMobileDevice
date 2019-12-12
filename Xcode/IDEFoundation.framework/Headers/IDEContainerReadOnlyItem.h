//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEReadOnlyItem-Protocol.h>

@class DVTFilePath, IDEContainer, NSString, NSURL;

@interface IDEContainerReadOnlyItem : NSObject <IDEReadOnlyItem>
{
    int _readOnlyStatus;
    IDEContainer *_container;
    DVTFilePath *_filePath;
}

- (void).cxx_destruct;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
@property(readonly, copy) NSString *description;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)initWithFilePath:(id)arg1 container:(id)arg2;
- (BOOL)makeWritableWithError:(id *)arg1;
@property(readonly) NSURL *readOnlyItemURL;
@property int readOnlyStatus; // @synthesize readOnlyStatus=_readOnlyStatus;
- (void)updateReadOnlyStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
