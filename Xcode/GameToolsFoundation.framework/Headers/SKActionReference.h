//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/GTFActionModel.h>

@class NSString;

@interface SKActionReference : GTFActionModel
{
    NSString *_referenceName;
}

- (void).cxx_destruct;
- (id)actionColor;
- (id)actionInfoString;
- (id)actionName;
- (long long)actionType;
- (void)encodeWithCoder:(id)arg1;
- (id)getSKAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceName:(id)arg1;
@property(readonly, nonatomic) NSString *referenceFilename;
@property(copy, nonatomic) NSString *referenceName; // @synthesize referenceName=_referenceName;

@end
