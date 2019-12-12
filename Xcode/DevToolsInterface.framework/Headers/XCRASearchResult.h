//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface XCRASearchResult : NSObject
{
    id _content;
    NSURL *_url;
    NSDictionary *_context;
}

+ (id)_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBracketsInString:(id)arg1;
+ (id)searchResultWithContent:(id)arg1 url:(id)arg2 context:(id)arg3;
+ (id)searchResultWithString:(id)arg1;
+ (id)searchResultWithString:(id)arg1 makeHTML:(BOOL)arg2;
- (id)content;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)initWithContent:(id)arg1 url:(id)arg2 context:(id)arg3;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
