//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDEEnergyAdditionGuidance : NSObject
{
    BOOL _isOSXAppNapGuidance;
    BOOL _hidden;
    NSString *_message;
    NSArray *_applicableTemplates;
    unsigned long long _verticalPosition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *applicableTemplates; // @synthesize applicableTemplates=_applicableTemplates;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL isOSXAppNapGuidance; // @synthesize isOSXAppNapGuidance=_isOSXAppNapGuidance;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long verticalPosition; // @synthesize verticalPosition=_verticalPosition;

@end

