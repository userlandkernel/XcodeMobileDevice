//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XDPUtility : NSObject
{
}

+ (void)_makeNameValidationSets;
+ (BOOL)booleanForKey:(id)arg1 inElement:(id)arg2 inStereotypeName:(id)arg3;
+ (id)objectForKey:(id)arg1 inElement:(id)arg2 inStereotypeName:(id)arg3;
+ (void)removeStereotypeNamed:(id)arg1 inElement:(id)arg2;
+ (void)setBoolean:(BOOL)arg1 forKey:(id)arg2 inElement:(id)arg3 inStereotypeName:(id)arg4;
+ (void)setObject:(id)arg1 forKey:(id)arg2 inElement:(id)arg3 inStereotypeName:(id)arg4;
+ (id)validateElementName:(id)arg1 beginWithLowerCase:(BOOL)arg2 beginWithUpperCase:(BOOL)arg3 allowPeriod:(BOOL)arg4;

@end

