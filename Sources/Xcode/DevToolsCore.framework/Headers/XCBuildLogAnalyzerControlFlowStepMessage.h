//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildLogAnalyzerStepMessage.h>

@class NSArray, XCTextFileLocation;

@interface XCBuildLogAnalyzerControlFlowStepMessage : XCBuildLogAnalyzerStepMessage
{
    XCTextFileLocation *_endFileLocation;
    NSArray *_edges;
}

- (void)dealloc;
- (id)edges;
- (id)endFileLocation;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithTitle:(id)arg1 startFileLocation:(id)arg2 endFileLocation:(id)arg3;
- (BOOL)isAnalyzerControlFlowStepMessage;
- (void)setEdges:(id)arg1;
- (id)startFileLocation;
- (void)writeToSerializer:(id)arg1;

@end
