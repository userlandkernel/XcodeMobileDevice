//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDistributedBuildHost.h>

@interface XCRemoteVolunteer : XCDistributedBuildHost
{
}

+ (id)distributedBuildHostWithSpec:(id)arg1;
- (id)bonjourServiceName;
- (id)compilerVersionStrings;
- (id)description;
- (BOOL)hasCompiler:(id)arg1;
- (id)initWithHostSpec:(id)arg1;
- (BOOL)isCompatibleHost;
- (void)setBonjourServiceName:(id)arg1;
- (void)setIsReachable:(BOOL)arg1;
- (id)statusString;

@end

