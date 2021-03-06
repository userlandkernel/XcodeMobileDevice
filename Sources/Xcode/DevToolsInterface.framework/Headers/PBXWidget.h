//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSTextField, NSView, PBXWidgetGroup;

@interface PBXWidget : NSObject
{
    PBXWidgetGroup *_widgetGroup;
    NSView *_view;
    NSTextField *_descriptionField;
    NSDictionary *_valueDescriptions;
    NSString *_defaultStringValue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)aspects;
+ (BOOL)isUsableWithView:(id)arg1;
+ (id)widgetFromDescriptionDict:(id)arg1 lookUpSubviewTagsInView:(id)arg2;
- (id *)_keyPtrForAspect:(id)arg1;
- (void)_setDescriptionField:(id)arg1;
- (void)_setValueDescriptions:(id)arg1;
- (void)_setView:(id)arg1;
- (void)_setWidgetGroup:(id)arg1;
- (void)action:(id)arg1;
- (void)bindKey:(id)arg1 toAspect:(id)arg2;
- (void)dealloc;
- (id)defaultStringValue;
- (id)delegate;
- (id)descriptionField;
- (BOOL)endEditing;
- (id)init;
- (id)initFromDescriptionDict:(id)arg1 lookUpSubviewTagsInView:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)keyForAspect:(id)arg1;
- (void)setDefaultStringValue:(id)arg1;
- (void)setStringValue:(id)arg1 forAspect:(id)arg2;
- (id)stringValueForAspect:(id)arg1;
- (void)update;
- (id)valueDescriptions;
- (id)view;
- (id)widgetGroup;

@end

