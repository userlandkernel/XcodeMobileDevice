//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTextAnnotation, DVTTextSidebarView;

@interface DVTTextAnnotationAccessibilityProxyItem : NSObject
{
    DVTTextSidebarView *_parent;
    DVTTextAnnotation *_annotation;
}

+ (id)textAnnotationProxyItemWithAnnotation:(id)arg1 parent:(id)arg2;
- (void).cxx_destruct;
- (struct CGRect)_getAnnotationBounds:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property(readonly) DVTTextAnnotation *annotation; // @synthesize annotation=_annotation;
- (unsigned long long)hash;
- (id)initWithAnnotation:(id)arg1 parent:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) DVTTextSidebarView *parent; // @synthesize parent=_parent;

@end

