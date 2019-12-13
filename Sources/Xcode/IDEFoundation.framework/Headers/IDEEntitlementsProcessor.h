//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionItem, IDEDistributionMethod, IDEEntitlementsDictionary;

@interface IDEEntitlementsProcessor : NSObject
{
    IDEDistributionMethod *_distributionMethod;
    IDEDistributionItem *_distributionItem;
    IDEEntitlementsDictionary *_profileEntitlements;
    IDEEntitlementsDictionary *_itemEntitlements;
}

+ (id)availableOptionsForPropertyList;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDEDistributionItem *distributionItem; // @synthesize distributionItem=_distributionItem;
@property(readonly, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
- (id)init;
- (id)initWithDistributionMethod:(id)arg1 distributionItem:(id)arg2 profileEntitlements:(id)arg3 itemEntitlements:(id)arg4;
@property(readonly, nonatomic) IDEEntitlementsDictionary *itemEntitlements; // @synthesize itemEntitlements=_itemEntitlements;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL needsInteraction;
@property(readonly, nonatomic) IDEEntitlementsDictionary *profileEntitlements; // @synthesize profileEntitlements=_profileEntitlements;
- (BOOL)runWithError:(id *)arg1;

@end
