//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@interface IDEEnterFullScreenAlert : IDEAlert
{
    int _action;
}

- (BOOL)_isEnabledForEvent:(id)arg1 withContext:(id)arg2;
@property(nonatomic) int action; // @synthesize action=_action;
- (id)actions;
- (id)initWithPropertyList:(id)arg1;
- (void)prepareToRunForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3;
- (id)propertyList;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)valuesForProperty:(id)arg1;

@end

