//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsSupport/NSCoding-Protocol.h>
#import <DevToolsSupport/NSCopying-Protocol.h>

@class NSString;

@interface TSRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    NSString *_lastMatch;
    struct _NSRange _lastSubexpressionRanges[20];
    void *_compiledExpression;
    BOOL _ignoreCase;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)arg1;
+ (id)regularExpressionWithString:(id)arg1 ignoreCase:(BOOL)arg2;
+ (BOOL)validExpressionString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionString;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionString:(id)arg1;
- (id)initWithExpressionString:(id)arg1 ignoreCase:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesString:(id)arg1;
- (struct _NSRange)rangeForSubexpressionAtIndex:(unsigned long long)arg1 inString:(id)arg2;
- (id)replacementStringForFoundString:(id)arg1 replaceString:(id)arg2;
- (id)subexpressionsForString:(id)arg1;
- (id)substringForSubexpressionAtIndex:(unsigned long long)arg1 inString:(id)arg2;

@end

