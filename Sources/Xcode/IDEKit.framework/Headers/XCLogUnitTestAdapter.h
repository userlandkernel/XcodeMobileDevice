//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/XCLogSectionAdapter.h>

@interface XCLogUnitTestAdapter : XCLogSectionAdapter
{
}

- (unsigned long long)analyzerResultsForDataNode:(id)arg1;
- (unsigned long long)analyzerWarningsForDataNode:(id)arg1;
- (BOOL)anyImportantMessagesForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (unsigned long long)errorsForDataNode:(id)arg1;
- (BOOL)isUnitTestAdapter;
- (BOOL)supportsTextExpansionAtSectionLevelForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionForDataNode:(id)arg1;
- (unsigned long long)testFailuresForDataNode:(id)arg1;
- (id)titleSecondPartForDataNode:(id)arg1;
- (unsigned long long)warningsForDataNode:(id)arg1;

@end

