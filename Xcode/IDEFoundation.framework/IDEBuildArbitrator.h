//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface IDEBuildArbitrator : NSObject
{
    NSOperationQueue *_serializationQueue;
    NSMapTable *_fileProducingBuildTasksByFilePath;
    NSMapTable *_registeringBuildersByFilePath;
    NSMapTable *_registeredFilePathsByBuilder;
}

+ (void)initialize;
+ (id)sharedBuildArbitrator;
- (void).cxx_destruct;
- (id)init;
- (id)registerBuildTask:(id)arg1 asProducerOfFileAtPath:(id)arg2 forBuilder:(id)arg3;
- (void)unregisterAllBuildTasksForBuilder:(id)arg1;
- (void)unregisterBuildTaskWhichProducesFileAtPath:(id)arg1 forBuilder:(id)arg2;

@end

