//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDiffDataSource.h>

@interface XCDiffObjectDataSource : XCDiffDataSource
{
    id _objectController;
}

+ (void)initialize;
+ (Class)objectControllerClass;
- (id)arrangedContent;
- (void)dealloc;
- (struct _XCDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)initWithContent:(id)arg1;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (id)objectController;
- (void)setContent:(id)arg1;
- (void)setObjectController:(id)arg1;

@end
