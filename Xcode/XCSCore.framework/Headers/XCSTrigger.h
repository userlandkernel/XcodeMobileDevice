//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString, XCSTriggerConditions, XCSTriggerEmailConfiguration;

@interface XCSTrigger : XCSObject
{
}

+ (id)triggerWithType:(unsigned long long)arg1 name:(id)arg2 phase:(unsigned long long)arg3 conditions:(id)arg4 scriptBody:(id)arg5 emailConfiguration:(id)arg6 validationErrors:(id *)arg7;
- (BOOL)_validateType:(unsigned long long)arg1 name:(id)arg2 phase:(unsigned long long)arg3 conditions:(id)arg4 scriptBody:(id)arg5 emailConfiguration:(id)arg6 validationErrors:(id *)arg7;
- (id)duplicate;
- (unsigned long long)executionReasonForIntegration:(id)arg1;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 phase:(unsigned long long)arg3 conditions:(id)arg4 scriptBody:(id)arg5 emailConfiguration:(id)arg6 service:(id)arg7 validationErrors:(id *)arg8;
- (BOOL)shouldExecuteForIntegration:(id)arg1;

// Remaining properties
@property(retain, nonatomic) XCSTriggerConditions *conditions; // @dynamic conditions;
@property(retain, nonatomic) XCSTriggerEmailConfiguration *emailConfiguration; // @dynamic emailConfiguration;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned long long phase; // @dynamic phase;
@property(retain, nonatomic) NSString *scriptBody; // @dynamic scriptBody;
@property(nonatomic) unsigned long long type; // @dynamic type;

@end
