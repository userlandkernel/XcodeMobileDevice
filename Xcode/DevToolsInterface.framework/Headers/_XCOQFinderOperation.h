//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/_XCOQOperation.h>

@class NSArray, NSString;

@interface _XCOQFinderOperation : _XCOQOperation
{
    NSString *_folder;
    NSString *_parentFolder;
    NSString *_framework;
    NSArray *_findables;
}

- (void)dealloc;
@property(copy) NSArray *findables; // @synthesize findables=_findables;
@property(readonly) NSString *folder; // @synthesize folder=_folder;
@property(readonly) NSString *framework; // @synthesize framework=_framework;
- (id)initWithFolder:(id)arg1 parentFolder:(id)arg2 framework:(id)arg3;
@property(readonly) NSString *parentFolder; // @synthesize parentFolder=_parentFolder;

@end
