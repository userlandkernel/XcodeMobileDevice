//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexNewFile.h>

@class DVTFilePath, IDEIndexImportSession, NSArray, NSMutableArray, NSSet, NSString;

@interface IDEIndexNewMainFile : IDEIndexNewFile
{
    IDEIndexImportSession *_session;
    NSString *_target;
    NSString *_source;
    DVTFilePath *_pchPath;
    NSMutableArray *_files;
    NSSet *_dirtyFiles;
    long long _unitId;
    BOOL _deferred;
}

- (void).cxx_destruct;
- (void)addFile:(id)arg1;
- (void)didSubmit;
@property(retain, nonatomic) NSSet *dirtyFiles; // @synthesize dirtyFiles=_dirtyFiles;
@property(readonly, nonatomic) NSArray *files; // @synthesize files=_files;
- (id)importer;
- (id)initWithPath:(id)arg1 modified:(id)arg2;
@property(nonatomic, getter=isDeferred) BOOL deferred; // @synthesize deferred=_deferred;
@property(retain, nonatomic) DVTFilePath *pchPath; // @synthesize pchPath=_pchPath;
- (long long)realFileIdForId:(long long)arg1;
- (long long)realGroupIdForId:(long long)arg1;
@property(readonly, nonatomic) long long realUnitId;
@property(retain, nonatomic) IDEIndexImportSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(nonatomic) long long unitId; // @synthesize unitId=_unitId;
- (void)submit;

@end

