//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFosterParent.h>

#import <DevToolsInterface/XCBreakpointActionsProtocol-Protocol.h>
#import <DevToolsInterface/XCGroupingProtocol-Protocol.h>

@interface XCBreakpointProxy : PBXFosterParent <XCGroupingProtocol, XCBreakpointActionsProtocol>
{
}

- (void)disableAllBreakpoints;
- (void)enableAllBreakpoints;
- (void)exportBreakpoints:(id)arg1 toPath:(id)arg2;
- (Class)groupingClass;
- (void)importBreakpointsFromPath:(id)arg1 forProject:(id)arg2 atPath:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;

@end

