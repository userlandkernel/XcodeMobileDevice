//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/GTFActionModel.h>

@class NSString, SCNAction;

@interface SCNActionModel : GTFActionModel
{
    SCNAction *_action;
    long long _type;
}

- (void).cxx_destruct;
- (id)_getSCNAction;
- (id)actionColor;
- (id)actionInfoString;
- (id)actionName;
- (long long)actionType;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *fileName;
- (id)getSCNAction;
- (id)getSKAction;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSCNAction:(id)arg1;
- (void)reverse;
- (void)setup;

@end

