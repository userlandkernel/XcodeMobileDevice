//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface XDDevPropertyMapping : NSManagedObject
{
    BOOL _isObservingSourceName;
}

+ (void)setPropertyMappingTriggerNotifications;
- (id)entityMapping;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (BOOL)hasDuplicateName;
- (BOOL)hasValidName;
- (BOOL)isInDestinationEntity;
- (id)mappingStatusIconData;
- (id)name;
- (id)possibleNames;
- (Class)propertyClassType;
- (void)setEntityMapping:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoData:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (void)setValueExpressionAsString:(id)arg1;
- (void)setValueExpressionData:(id)arg1;
- (id)shortPropertyType;
- (id)userInfo;
- (id)userInfoData;
- (BOOL)validateValueExpressionAsString:(id *)arg1 error:(id *)arg2;
- (id)valueExpression;
- (id)valueExpressionAsString;
- (id)valueExpressionData;

@end

