//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSKeyedUnarchiverDelegate-Protocol.h>

@class DVTFilePath, NSString;

@interface IDEMigrationTargetChooserStatePersistence : NSObject <NSKeyedUnarchiverDelegate>
{
    DVTFilePath *_stateFilePath;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)loadStateData;
- (id)mergeStateData:(id)arg1;
- (void)saveStateData:(id)arg1;
@property(retain) DVTFilePath *stateFilePath; // @synthesize stateFilePath=_stateFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

