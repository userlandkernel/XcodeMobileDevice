//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DSADownloader, NSError, NSString, NSURLAuthenticationChallenge, NSURLCredential;

@protocol DSADownloaderDelegate
- (void)downloader:(DSADownloader *)arg1 didFailWithError:(NSError *)arg2;
- (void)downloaderDidFinish:(DSADownloader *)arg1;

@optional
- (void)downloader:(DSADownloader *)arg1 didMakeProgress:(float)arg2;
- (NSURLCredential *)downloader:(DSADownloader *)arg1 needsCredentialForChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)downloader:(DSADownloader *)arg1 willDownloadFile:(NSString *)arg2 ofSize:(long long)arg3;
@end

