//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, NSString;

@interface IDECodesignIssueResolutionOption : NSObject
{
    BOOL _requiresUserInteraction;
    NSString *_name;
    DVTLogAspect *_logAspect;
}

- (void).cxx_destruct;
- (id)initWithLogAspect:(id)arg1;
- (id)invokeOption;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) BOOL requiresUserApprovalButOtherwiseAutomatic;
@property(readonly) BOOL requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;

@end

