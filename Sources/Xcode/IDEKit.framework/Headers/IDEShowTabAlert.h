//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSString;

@interface IDEShowTabAlert : IDEAlert
{
    int _tabTarget;
    NSString *_tabName;
    double _lastChanged;
}

- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (id)initWithPropertyList:(id)arg1;
@property(nonatomic) double lastChanged; // @synthesize lastChanged=_lastChanged;
- (id)propertyList;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) int tabTarget; // @synthesize tabTarget=_tabTarget;
- (id)tabTargets;
- (id)valuesForProperty:(id)arg1;

@end

