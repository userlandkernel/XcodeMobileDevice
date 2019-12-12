//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/DVTRadarSupport_Issue-Protocol.h>

@class NSString, XCSIntegration, XCSIntegrationIssue;

@interface XCSUIIntegrationIssue : NSObject <DVTRadarSupport_Issue>
{
    NSString *attachLabelTitle;
    unsigned long long _issueUIType;
    XCSIntegrationIssue *_issue;
    XCSIntegration *_integration;
}

+ (id)colorForUIIssueType:(unsigned long long)arg1;
+ (id)issueTypeStringFromUIIssueType:(unsigned long long)arg1;
+ (id)summaryStringForIssues:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long associatedRadarID;
@property(readonly, copy, nonatomic) NSString *attachLabelTitle; // @synthesize attachLabelTitle;
@property(readonly, copy, nonatomic) NSString *briefStringRepresentation;
- (id)initWithIntegrationIssue:(id)arg1 type:(unsigned long long)arg2 integration:(id)arg3;
@property(readonly) XCSIntegration *integration; // @synthesize integration=_integration;
@property(readonly) XCSIntegrationIssue *issue; // @synthesize issue=_issue;
@property(readonly) unsigned long long issueUIType; // @synthesize issueUIType=_issueUIType;
- (id)sourceFilename;
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
- (id)tinyStringRepresentation;
@property(readonly, nonatomic) id underlyingIssue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
