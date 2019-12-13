//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface IDEProvisioningProfileNameDisambiguator : NSObject
{
    NSCountedSet *_profileNamesCountedSet;
    NSCountedSet *_profileNamesWithTeamsCountedSet;
}

+ (id)teamIDWithProfile:(id)arg1;
- (void).cxx_destruct;
- (id)initWithProfileNamesCountedSetWithProfiles:(id)arg1 ineligibleProfiles:(id)arg2;
- (id)nameForProfile:(id)arg1;
@property(retain, nonatomic) NSCountedSet *profileNamesCountedSet; // @synthesize profileNamesCountedSet=_profileNamesCountedSet;
@property(retain, nonatomic) NSCountedSet *profileNamesWithTeamsCountedSet; // @synthesize profileNamesWithTeamsCountedSet=_profileNamesWithTeamsCountedSet;

@end
