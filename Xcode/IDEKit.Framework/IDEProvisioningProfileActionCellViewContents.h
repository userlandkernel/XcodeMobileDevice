//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDEEnhancedProvisioningProfile;

@interface IDEProvisioningProfileActionCellViewContents : NSObject
{
    BOOL _busy;
    id <IDEEnhancedProvisioningProfile> _profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 busy:(BOOL)arg2;
@property(readonly, nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
- (id)name;
@property(readonly, nonatomic) id <IDEEnhancedProvisioningProfile> profile; // @synthesize profile=_profile;

@end

